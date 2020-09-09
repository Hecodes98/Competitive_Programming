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

ll getAdd(ll a){
	ll h = 10, l = 0;
	while(a > 0){
		ll i = a%10;
		a/=10;
		h = min(h,i);
		l = max(l,i);
	}
	return h*l;
}

void solve(){
	ll a, k; cin >> a >> k;
	ll ans;
	for(int i = 1 ; i < k ; ++i){
		ans = getAdd(a);
		if(ans == 0)break;
		a+=ans;
	}
	cout << a << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}  
