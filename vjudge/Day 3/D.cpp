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

int a[120][2];
const int oo = 1e9+10;
const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

ll memo[100005][100];
int N,W;

ll dp(int i, int c){
	if(i > N-1) return 0;
	if(memo[c][i] != -1)return memo[c][i];
	ll ans = -1;
	if(a[i][0] + c <= W){
		ans = dp(i+1, c+a[i][0])+a[i][1];
	}
	ans = max(ans, dp(i+1, c));
	memo[c][i] = ans;
	return memo[c][i];
}

void solve(){
	cin>>N>>W;
	for(int i = 0 ; i < N; ++i){
		for(int j = 0 ; j < 2 ; ++j){
			cin >> a[i][j];
		}
	}	
	memset(memo, -1, sizeof memo);
	cout << dp(0,0) << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  






