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
int n,k;
void solve(){
	cin>>n>>k;
	for(int i = 1 ; i <= n ; ++i)cin>>a[i];
	for(int i = 1 ; i <=n ; ++i)dp[i]=oo;
	dp[0] = 0;
	dp[1] = 0;
	for(int i = 2 ; i <= n ; ++i){
		for(int j = max(1, i-k) ; j < i ; ++j)
			dp[i] = min(abs(a[i]-a[j]) + dp[j] , dp[i]);
	}
	cout << dp[n] << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  




