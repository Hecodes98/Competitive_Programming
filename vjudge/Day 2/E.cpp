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

const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

int a[100005];

void solve(){
	int n;cin>>n;
	vll a(n);
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	sort(a.rbegin() , a.rend());
	for(int i = 0 ; i < n; ++i){
		if(a[i] != 1 || a[i] != 0){
			for(int j = 0 ; j < n-1 ; ++j){
				ll tmp = a[j];
				a[j]|=a[j+1];
				a[j+1]&=tmp;
			}
		}
	}
	ll sum=0;
	for(int i = 0 ; i < n ; ++i){
		sum+=(a[i]*1ll*a[i]);
	}
	cout << sum << '\n';
}


int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  






