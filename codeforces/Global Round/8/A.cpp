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
	int a,b,n; cin >>a>>b>>n;
	ll fib[100];
	if(a > b)swap(a,b);
	fib[0]=a;
	fib[1]=b;
	int cnt = 0;
	for(int i = 2 ; i < 100 ; ++i){
		fib[i] = fib[i-1]+fib[i-2];
		if(fib[i] > n){
			cnt = i; break;
		}
	}
	cout << cnt - 1 <<'\n'; 	
}	
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}  
