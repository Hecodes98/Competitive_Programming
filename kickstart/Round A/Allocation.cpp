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

void solve(){
	int n,b,h,w;
	while(cin>>n>>b>>h>>w){
		int bpw,cs=1e9,ci;
		for(int i = 0 ; i < h ; ++i){
			int c;cin >> c;
			int tm=0;
			ci=0;
			for(int j = 0 ; j < w ; ++j){
				int bpw;cin>>bpw;
				if(bpw < n){
					++ci;
				}else tm+=n*c;
			}
			cs = min(tm,cs);
			if(ci == n)cout << "stay home\n";
			else cout << cs << '\n';
		}
	}
}
int main(){   
    
	solve();
	return 0;
}  
