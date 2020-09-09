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

char a[1020][1020];
const int oo = 1e9+10;
const int mod = 1e9+7;
ll memo[1020][1020];

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

int add(int a, int b){
	return ((a+b) < mod ? a+b : a+b - mod);
}

int h,w;
ll dp(int i, int j){
	if(i == h-1 && j == w-1)return 1;
	if(memo[i][j] != -1)return memo[i][j];
	ll ans = 0;
	if(i+1 < h && a[i+1][j] != '#'){
		ans = dp(i+1,j);
	}
	if(j+1 < w &&  a[i][j+1] != '#'){
		ans = add(ans, dp(i,j+1));
	}
	return memo[i][j] = ans;
}

void solve(){
	cin>>h>>w;
	for(int i = 0 ; i < h; ++i){
		for(int j = 0 ; j < w ; ++j){
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







