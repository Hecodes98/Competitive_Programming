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
	int n,m;
	while(cin>> n >> m){
		if(n == 0 && m == 0)break;
		bitset<1000000> bs(0);
		bool ok=false;
		while(n--){
			int u,v;cin>>u>>v;
			for(int i = u ; i<v ; ++i){
				if(ok)break;
				if(bs[i] == 1)ok=true;
				else bs[i] = 1;
			}
		}
		while(m--){
			int u,v,ri;cin>>u>>v>>ri;
			while(v<=1000000){
				for(int i = u ; i < v ; ++i){
					if(ok)break;
					if(bs[i]==1)ok=true;
					else bs[i]=1;
				}
				u+=ri;
				v+=ri;
			}
		}
		if(!ok)cout << "NO CONFLICT\n";
		else cout << "CONFLICT\n";
	}
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);	
	#ifndef ONLINE_JUDGE
		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}

