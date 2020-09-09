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

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

void solve(){
	int n; cin>>n;
	int mini = 1001;
	int a[n];
	for(int i = 0 ; i < n ; ++i)cin>>a[i];
	sort(a,a+n);
	for(int i = 0 ; i < n-1 ; ++i){
		int t = a[i+1] - a[i];
		mini = min(mini,t);		
	}
	cout << mini << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}

