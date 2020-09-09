#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
#define REPL(i,a,b) for(int i=a;i<a;++i)
#define REPLE(i,a,b) for(int i=a;i<=a;++i)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

string a[55];

void solve(){
	int n;cin>>n;
	for(int i = 0 ; i < n; ++i){
		string s;
		cin >> s;
		a[i]=s;
	}	
	for(int i = 0 ; i < n-1 ; ++i){
		for(int j = 0 ; j < n-1 ; ++j){
			if(a[i][j] == '1' && a[i+1][j] == '0' && a[i][j+1] == '0'){
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
