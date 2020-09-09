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
	int n;cin>>n;
	int nce=0, nco=0;
	for(int i = 0 ; i < n ; ++i){
		int a;cin>>a;
		if(i&1^1){
			if(a&1)++nce;
		}else{
			if(a&1^1)++nco;
		}
	}
	if(nce == nco) cout << nce << '\n';
	else cout << "-1\n";
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}  
