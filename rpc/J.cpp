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
	ll MAX,MIN;
	MIN = 1e16+1;
	int n;cin >> n;
	ll a;
	cin >> a;
	MAX = a;
	for(int i = 1 ; i < n ; ++i){
		cin >> a;        
		MIN = min(a,MIN);
	}
	cout << MAX - MIN << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}     
}  
