#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
void solve(){
	int a[3];
	for(int i = 0 ; i < 3 ; ++i)cin >>a[i];
	sort(a,a+3);
	int n; cin >> n;
	n = n-(a[2]-a[1]+a[2]-a[0]);
	if(n==0)cout << "YES\n";
	else if(n>0&&n%3==0) cout << "YES\n";
	else cout << "NO\n";
	
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}       
}