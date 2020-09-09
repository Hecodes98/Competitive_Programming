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

#define M_PI 3.141592653589793238

const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}



void solve(int n){
	vector<int> o(n),t(n);

	for(int i = 0 ; i < n ; ++i){
		cin >> o[i] >> t[i];
	}
	sort(o.begin(), o.end());
	sort(t.begin(), t.end());

	if(o==t)cout << "YES\n";
	else cout << "NO\n";
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(cin >> t && t != 0){
		solve(t);
	}
}  




