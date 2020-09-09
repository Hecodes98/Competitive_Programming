#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
#define REPL(i,a,b) for(int i=a;i<a;++i)
#define REPLE(i,a,b) for(int i=a;i<=a;++i)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int> pi;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

int calc(int a, int b, int c){
	return abs(a-b)+abs(a-c)+abs(b-c);	
}

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	int ans = calc(a, b, c);
	for (int da = -1; da <= 1; ++da) {
		for (int db = -1; db <= 1; ++db) {
			for (int dc = -1; dc <= 1; ++dc) {
				int na = a + da;
				int nb = b + db;
				int nc = c + dc;
				ans = min(ans, calc(na, nb, nc));
			}
		}
	}
	cout << ans << endl;
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}       
}   