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

int dp(string s,int i,int j, int cnt){
	if(j-i < 0)return 0;
	if(s[i] == s[j]){
		if(i == j) return dp(s,++i,--j,cnt+1) + cnt;
		return dp(s,++i,--j,cnt+2)+cnt;
	}
	int ans = max(dp(s,++i,j,0),dp(s,i,--j,0));
	return ans;
}

void solve(){
	string s;cin>>s;
	int ans = dp(s,0,s.size()-1,0);
	cout << ans << '\n';	
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}  

