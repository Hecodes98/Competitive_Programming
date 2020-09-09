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
void solve(){
	string ln;
	getline(cin,ln);
	int r = stoi(ln);
	int acc = 0;
	string ans;
	while(r--){
		getline(cin,ln);
		int itms = stoi(ln);
		getline(cin,ln);
		string nm = ln;
		bool p = false;
		bool pck = false;
		while(itms--){
			getline(cin, ln);
			if(ln == "pea soup"){
				p = true;
			}else if(ln == "pancakes"){
				pck = true;
			}
		}
		if(p && pck){
			if(acc == 0){
				ans = nm;
			}
			acc++;
		}
	}
	if(acc == 0 ){
		cout << "Anywhere is fine I guess" << '\n';
	}else{
		cout << ans << '\n';
	}
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}



