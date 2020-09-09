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

int a[100020][3];
int memo[1000][1000];
int n;

ll dp(int ac, int lst){
	if(ac == n-1){
		if((a[ac][0] < a[lst][0] && a[ac][1] < a[lst][1]) || (a[lst][0] < a[ac][0] && a[lst][1]<a[ac][1])  || (a[ac][0] == a[lst][0] && a[ac][1] == a[lst][1])){
			return a[ac][2];
		}
		return 0;
	}
	if(memo[ac][lst] != -1 && lst != -1) return memo[ac][lst];
	ll ans = -1;
	if((a[ac][0] < a[lst][0] && a[ac][1] < a[lst][1]) || (a[lst][0] < a[ac][0] && a[lst][1]<a[ac][1]) ||(a[ac][0] == a[lst][0] && a[ac][1] == a[lst][1])){
		ans = dp(ac+1,ac)+a[ac][2];
	}
	ans = max(ans, dp(ac+1,ac));
	return memo[ac][lst] = ans;
}

void solve(){
	while(cin >> n){
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i][0];
			cin >> a[i][1];
			cin >> a[i][2];
		}
		memset(memo, -1, sizeof memo);
		cout << dp(0,-1) << '\n';
	}
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



