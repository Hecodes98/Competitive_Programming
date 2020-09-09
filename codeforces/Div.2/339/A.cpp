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
	ll l,r,k;cin>>l>>r>>k;
	ll p = 1;
	bool f=false;
	while(p <= r){
		if(p >= l){
			cout << p << " ";
			f=true;
		}
		if(p>r/k)break;
		p*=k;
	}
	if(!f)cout << "-1";
		cout << '\n';	
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  
