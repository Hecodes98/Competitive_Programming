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
	int n,k; cin>>n>>k;
	int p = 0;
	for(int i = 1 ; i < 40000 ; ++i){
		if(n%i == 0){
			if(i < = k){
				p = max(p,i);
			}
			if(n/i <= k){
				p = max(p, n/i);
			}
		}
	}	
	cout << n/p << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}

