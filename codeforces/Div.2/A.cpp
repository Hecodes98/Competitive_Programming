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

ll be(int y){
	int x = 2;
	ll ans = 1;
	while(y>0){
		if(y&1)ans*=x;
		y = y >> 1;
		x*=x;
	}
	return ans;
}

void solve(){
	int n;cin>>n;
	ll a[n];
	for(int i = 1; i <= n ; ++i){
		a[i-1] = be(i);
	}
	ll diff=0;
	for(int i = 0 ; i < n ; ++i){
		if(i+1 < n/2 || i+1 == n)diff+=a[i];
		else diff-=a[i];
	}
	cout << diff << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}  
