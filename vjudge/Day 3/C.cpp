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

int a[100020][3];
const int oo = 1e9+10;
const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

int memo[100005][3];
int n,k;

int dp(int ac, int d){
	if(d == n)return 0;
	if(ac == 4){
		int ans = dp(0, d+1) + a[d][0];
		ans = max(ans , dp(1, d+1) + a[d][1]);
		ans = max(ans , dp(2, d+1) + a[d][2]);
		memo[d][ac] = ans;
	}
	if(memo[d][ac] != -1)return memo[d][ac];
	if(ac==0){
		int ans = dp(1, d+1) + a[d][1];
		ans = max(ans , dp(2, d+1) + a[d][2]);
		memo[d][ac] = ans;
	}
	if(ac==1){
		int ans = dp(0, d+1) + a[d][0];
		ans = max(ans , dp(2, d+1) + a[d][2]);
		memo[d][ac] = ans;
	}
	if(ac==2){
		int ans = dp(0, d+1) + a[d][0];
		ans = max(ans , dp(1, d+1) + a[d][1]);
		memo[d][ac] = ans;
	}
	return memo[d][ac];
}

void solve(){
	cin>>n;
	for(int i = 0 ; i < n; ++i){
		for(int j = 0 ; j < 3 ; ++j){
			cin >> a[i][j];
		}
	}	
	memset(memo, -1, sizeof memo);
	cout << dp(4,0) << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  





