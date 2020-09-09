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

void solve(){
	int n;cin>>n;
	ll sum1 = (1 << n);
	ll sum2 = 0;
	for(int i = 1 ; i < n/2 ; ++i){
		sum1+=(1<<i);
	}
	for(int i = n/2 ; i < n ; ++i){
		sum2+=(1<<i);
	}	
	cout << sum1 - sum2 << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}  

