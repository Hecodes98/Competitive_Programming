#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define REPL(i,a,b) for(int i=a;i<b;++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
#define f first 
#define s second 
#define ALL(v) v.begin(), v.end()
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi; 

const int MOD=1e9+7;
const int inf=1<<30;
const ll INF=1e18;

int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}
int n,m;
void solve(){
	cin>>n>>m;
	string a[n];
	string b[m];
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	for(int i = 0 ; i < m ; ++i){
		cin >> b[i];
	}
	for(int i = 0 ; i < m ; ++i){
		for(int j = 0 ; j < b[i].size() ; ++j){
			if(b[i][j] == '0')b[i][j] = 'O';
			if(b[i][j] == '1')b[i][j] = 'L';
			if(b[i][j] == '2')b[i][j] = 'Z';
			if(b[i][j] == '3')b[i][j] = 'E';
			if(b[i][j] == '5')b[i][j] = 'S';
			if(b[i][j] == '6')b[i][j] = 'B';
			if(b[i][j] == '7')b[i][j] = 'T';
			if(b[i][j] == '8')b[i][j] = 'B';
		}
	}
	for(int i = 0 ; i < m ; i++){
		bool ok = 1;
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k <= ((int)b[i].size() - (int)a[j].size()) ; k++){
				if(b[i].substr(k, (int)a[j].size()) == a[j]){
					ok = 0;
				}
			}	
			if(!ok){
				cout << "INVALID\n";
				break;
			}
		}
		if(ok)cout << "VALID\n";
	}
	

}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}





