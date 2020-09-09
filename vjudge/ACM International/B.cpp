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

#define M_PI 3.14159265358979323846

int a[1010];

const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

int f(int x){
	int ans = 1;
	for(int i = 1 ; i <= x; ++i){
		ans*=i;
		ans%=mod;
	}
	return ans;
}

void solve(){
	int n;cin>>n;
	memset(a,0,sizeof(a));
	for(int i = 0 ; i < n ; ++i){
		int x;cin>>x;
		a[x]++;
	}
	int ans = 1;
	for(int i = 1 ; i <= 1000; ++i){
		if(a[i]!=0){
			ans*=f(a[i]);
			ans%=mod;
		}
	}
	cout << ans << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}  


