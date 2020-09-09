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

int memo[20][2][90][90];
string s;

int dp(int idx, int top, int even , int odd){
	if(idx == s.size()) return (even-odd)==1;
	if(memo[idx][top][even][odd] != -1)return memo[idx][top][even][odd];
	int mx = top == 1 ? s[idx]-'0' : 9;
	int ans = 0;
	for(int i = 0 ; i <= mx ; ++i){
		int tmpe = ((s.size() - idx)&1^1) ? even+i : even;
		int tmpo = ((s.size() - idx)&1^1) ? odd : odd+i;
		ans += dp(idx+1 , top && (i==mx) , tmpe,tmpo);
	}
	return memo[idx][top][even][odd] = ans;
}

void solve(){
	int l,r;cin>>l>>r;
	s = to_string(l-1);
	memset(memo, -1 , sizeof memo);
	l = dp(0, 1, 0, 0);
	s = to_string(r);
	memset(memo , -1, sizeof memo);
	int ans = dp(0,1,0,0) -	l;
	cout << ans << '\n';
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	#ifndef ONLINE_JUDGE
		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}




