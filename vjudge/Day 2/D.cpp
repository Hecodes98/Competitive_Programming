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

int n,c;
int a[100020];
bool bs(int x){
	int cnt = 1;
	int sum = a[0];
	for(int i = 1 ; i < n ; ++i){
		if(a[i]-sum >= x){
			sum = a[i];
			cnt++;
			if(cnt == c)return true;
		}
	}
	return false;
}

void solve(){
	cin>>n>>c;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	int ans=-1;
	sort(a,a+n);
	int l = a[0] , r = a[n-1];
	while(l<r){
		int m = (l+r)/2;
		if(bs(m)){
			l=m+1;
			ans = max(ans,m);
		}else r=m;
	}
	cout << ans <<'\n'; 
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}  




