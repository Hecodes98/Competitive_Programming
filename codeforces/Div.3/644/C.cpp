#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
#define REPL(i,a,b) for(int i=a;i<b;++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

void solve(){
	int n; cin>>n;
	int a[n];
	for(int i=
			0 ; i < n ; ++i)cin>>a[i];
	sort(a,a+n);
	int e = 0 ;
	bool f = false;
	for(int i = 0 ; i < n ; ++i){
		if(a[i]%2==0)++e;
		if(i < n-1 && a[i+1]-a[i] == 1)f=true;	
	}
	cout << (f || e%2==0 ? "YES\n":"NO\n");	
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}


