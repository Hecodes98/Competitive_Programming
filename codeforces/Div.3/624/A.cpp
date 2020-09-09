#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
void solve(){
	ll a,b;cin >> a >> b;
	if(a==b){
		cout << "0\n";
		return;
	}
	if(a < b){
		if((b-a)&1)cout << "1\n";
		else cout << "2\n";
	}else{
	   if((a-b)&1^1)cout << "1\n";
		else cout << "2\n";
	}
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}       
}