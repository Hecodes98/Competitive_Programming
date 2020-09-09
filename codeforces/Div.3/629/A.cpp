#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
int solve(ll a, ll b){
	return (b-a%b)%b;
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	ll a,b;
	while(t--){
		cin >> a >> b;        
		cout << solve(a,b) << '\n';
	}
}