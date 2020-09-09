#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
void solve(){
	int n;cin>>n;
	int no=0, ne=0;
	while(n--){
		int a;cin>>a;
		if(a&1)++no;
		else ++ne;
	}
	if(no==0){
		cout << "NO\n";
		return;
	}                 
	if(no>0&&ne>0)cout<<"YES\n";
	else{
		if(ne==0&&no&1)cout<<"YES\n";
		else cout << "NO\n";	
	}
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}       
}