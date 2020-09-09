#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
#define REP(i, a, b) for (int i=a; i<=b; ++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

void solve(){
	int n,k;cin >> n >> k;
	int a[n],b[n];
	int sum=0, ns=0;
	for(int i = 0 ; i < n; ++i){
		cin >> a[i];
		sum+=a[i];
	}
	for(int i = 0 ; i < n ; ++i){
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	for(int i = 0 ; i < n ; ++i){
		if(a[i] >= b[i] || ns == k){
	    	break;	
		}
		sum-=a[i];
		sum+=b[i];
		a[i]=b[i];
		ns++;
	}
	cout << sum << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}     
}  
