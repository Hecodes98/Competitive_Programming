#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define REPL(i,a,b) for(int i=a;i<b;++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
#define DEBUG(x) cerr<< #x << " = " << (x) << endl
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

ll memo[250010];

void solve(){
	int n,mod;cin>>n>>mod;
	memo[0]=1;
	for(int i=1;i<=n;++i)memo[i]=memo[i-1]*i%mod;
	ll ans=0;
	for(int i = 1 ; i <=n ; ++i){
		ans+=(n-i+1)*(memo[i] * memo[n-i+1] % mod);
		ans=ans%mod;
	}
	cout << ans << '\n';
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






