#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
void solve(){
	short h,m;cin>> h >> m;
	cout << 1440 - (60*h-m) << '\n'; 
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}       
}   