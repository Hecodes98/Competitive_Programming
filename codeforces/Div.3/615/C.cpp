#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
void solve(){
	map<int,int>m;
	ll n; cin >> n;
	int a=1, b=1, c=1;
	for(int i = 2 ; i * i < n ; ++i){
		if(n%i==0){a = i;break;}
	}
	if(a == 1){cout << "NO\n";return;}        
	for(int i = a+1 ; i * i < n ; ++i){
		if((n/a)%i==0){b = i;break;}
	}
	if(b == 1){cout << "NO\n";return;} 
	c=n/(a*b);
	if(c!=a && c!=b && c>1){
		cout << "YES\n" << a <<" "<< b <<" "<< c << '\n';
	}else{
		cout << "NO\n";
	}
				
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}       
}