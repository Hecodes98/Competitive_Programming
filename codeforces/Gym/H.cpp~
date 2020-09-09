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

char pre[70];
int now[70];

ll bmsk(int n){
	ll x=0;
	for(int i = n - 1 ; i>=0;--i){
		cin >> pre[i];	
	}
	now[n-1] = pre[n-1] - '0';
	for(int i = n-2 ; i >=0 ; --i){
		now[i] = now[i+1]^(pre[i]-'0');
	}
	for(int i = 0 ; i < n ; ++i){
		if(now[i])
			x+=1LL << i;
	}
	return x;
}

void solve(){
	int n;cin>>n;
	ll r = bmsk(n), l = bmsk(n);
	cout << l-r-1 << '\n';

}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  

