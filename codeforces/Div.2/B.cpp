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
	int k,n;cin>>n>>k;
	set<int>s;	
	for(int i = 0 ; i < n ; ++i){
		int a;
		cin >> a;
		s.insert(a);
	}
	if(s.size() > k){
		cout << "-1\n";
		return;
	}
	cout << n*k << '\n';
	for(int i = 0 ; i < n ; ++i){
		for(int b : s)cout << b << " ";
		for(int j = 0 ; j < k-(int)s.size() ; ++j){
			cout << "1 ";
		}
	}
	cout <<"\n";
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}  
