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

int dp(int i, int nums[], int n, int memo[]){
	if(i >= n){
		return 0;
    }
    if(memo[i] != -1)return memo[i];
    memo[i] = max(dp(i+2, nums, n, memo)+nums[i], dp(i+1,nums,n,memo));
	return memo[i];
}

void solve(){
	int n; cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; ++i){
		cin>>a[i];
	}
	if(n == 0){
		cout << 0 << '\n';
		return;
	}
	if(n == 1){
		cout << a[0] << '\n';
		return;
	}
	if(n == 2){
		cout << max(a[0],a[1]) << '\n';
		return;
	}

	int memo[n];
	memset(memo,-1,sizeof(memo));
	int ans = max(dp(0,a,n-1, memo), dp(1, a, n,memo));
	cout << ans << '\n';
	memset(memo,0,sizeof(memo));
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}



