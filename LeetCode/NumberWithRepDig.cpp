#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define REPL(i,a,b) for(int i=a;i<b;++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
#define DEBUG(x) cerr << #x << " = " << (x) << endl;
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

int memo[11][1][1<<10][1];
string s;
    
int dp(int idx, int top, int fr, int rep){
	if(idx == s.size())return rep;
	if(memo[idx][top][fr][rep] != -1){return memo[idx][top][fr][rep];}
	int mxN = top == 1 ? s[idx] -'0' : 9;
	int i = 0;
	int ans = 0;
	DEBUG(idx);
	DEBUG(mxN);
	for( i ; i <= mxN ; ++i){
		if((fr&(1<<i))>0){
			ans += dp(idx+1, top && (i==mxN), fr, 1);
		}else{ 
			ans += dp(idx+1, top && (i==mxN), fr|(1<<i), rep);
		}          
	}
	return memo[idx][top][fr][rep] = ans;
}

void solve(){
	int n;cin>>n;
	s = to_string(n);
	memset(memo, -1, sizeof memo);
	cout << dp(0,1,0,0)<<endl;
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



