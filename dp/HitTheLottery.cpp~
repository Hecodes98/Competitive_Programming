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

const int oo = 1e9+10;
const int mod = 1e9+7;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

int a[5] = {100,20,10,5,1};
int n;
int memo[1000];

int dp(int m){
	if(m == n)return 0;
	if(m > n)return oo;
	if(memo[m] != -1)return memo[m];
	int ans=1e9;
	for(int i = 0 ; i < 5 ; ++i){
		ans = min(dp(a[i]+m) + 1,ans);
	}
	memo[m] = ans;
	return memo[m];
}

void solve(){
	cin>>n;
	memset(memo , -1 , sizeof memo);
	cout << dp(0) << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}  

