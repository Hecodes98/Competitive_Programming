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
	int a, b, n, S; cin >> a >> b >> n >> S;
	if(S%n <= b && 1ll*a*n+b >= S){
		cout << "YES\n";
	}else cout << "NO\n";                                                                                 
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}                     2
}  
