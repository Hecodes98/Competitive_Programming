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

int a[1010];

const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

void solve(){
	ll ans = 0;
		ll a, b;
		cin >> a >> b;
 
		if (a == b) {
			cout << "0" << "\n";
		} else {
			if (a < b)
				swap(a, b);
 
			ans = 0;
			while (a > b) {
				if (a / 8 >= b && a % 8 == 0) {
					ans = ans + 1;
					a = a / 8;
				}
				else if (a / 4 >= b && a % 4 == 0) {
					ans += 1;
					a = a / 4;
				}
				else if (a / 2 >= b && a % 2 == 0) {
					ans += 1;
					a = a / 2;
				} else {
					break;
				}
			}
 
			if (a == b) {
				cout << ans << "\n";
			} else {
				cout << "-1" << "\n";
			}
 
 
		}
 
	}	

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}  





