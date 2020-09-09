#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
void solve(){
	ll s;cin >> s;
	ll sum=0;
	int sp=0;
	while(s>=10){
		int res = s%10;
		s=s-res;
		sp+=s;
		s = (s/10)+res;
	}
	cout << sp+s << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}       
}