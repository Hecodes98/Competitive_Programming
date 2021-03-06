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

vll ln;

void dfs(ll act, int four, int seven){
	if(act > 1e10)return;
	if(four == seven)ln.push_back(act);
	dfs(act*10+4,four + 1,seven);
	dfs(act*10+7,four, seven+1);
}

void solve(){
	ll n;cin >> n;
	dfs(0,0,0);
	sort(ln.begin(), ln.end());	
	int i = 0;
	for(; ln[i] < n ;++i);
	cout << ln[i] << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  


