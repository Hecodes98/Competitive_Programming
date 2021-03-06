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
	int n;
	bitset<32> bs(0);
	while(cin>>n){
		cout << n;
		int ans = 0;
		for(int i = 1 ; i <= 4 ; ++i){
			int pos = 32 - (8*i);
			for(int j = 0 ; j < 8 ; ++j){
				if(n&1)bs.set(pos,1);
				else bs.set(pos,0);
				pos++;
				n>>=1;
			}
		}
		cout << " converts to " << (int)(bs.to_ulong()) << '\n';
	}
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}








