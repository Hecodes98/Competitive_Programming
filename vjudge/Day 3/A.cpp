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

#define M_PI 3.14159265358979323846

int a[100005];
const int oo = 1e9+10;
const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

int dp[100005];
int n;
int memo[100005];

int dpF(int i){
	if(i == n-1)return 0;
	if(memo[i] != -1)return memo[i];
	
	int ans = abs(a[i] - a[i+1])+dpF(i+1);
	if(i+2 <= n-1){
		ans = min(ans, abs(a[i]-a[i+2])+dpF(i+2));
	}

	return memo[i] = ans;
}

void solve(){
	cin>>n;
	for(int i = 0 ; i < n ; ++i)cin>>a[i];
	
	memset(memo, -1 , sizeof memo);
	cout << dpF(0) << '\n';
	return;
	dp[0] = 0;
	dp[1] = abs(a[1] - a[0]);
	for(int i = 2 ; i < n ; ++i){
		dp[i] = min(abs(a[i]-a[i-1]) + dp[i-1] , abs(a[i]-a[i-2])+dp[i-2]);
	}
	cout << dp[n-1] << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  



