#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
void solve(){
	int n,k;cin>>n>>k;
	int nk = n/k;
	int lc = n - nk*k;
	nk = (nk*k)+min(lc,k/2);
	cout << nk << '\n'; 
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}       
}   