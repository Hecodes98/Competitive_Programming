#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define REPL(i,a,b) for(int i=a;i<b;++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
#define f first 
#define s second 
#define ALL(v) v.begin(), v.end()
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi; 

const int MOD=1e9+7;
const int inf=1<<30;
const ll INF=1e18;

int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}

int a[10020];

void solve(){
	int n,i=0, id=1;
	ll sum=0;
	while(cin>>n){
		a[i]=n;
		sum+=n;
		if((i+1)&1){
			std::nth_element(a, a+(id/2) , a+id);
			cout << a[i/2] << '\n';
		}else{
			std::nth_element(a, a+(id/2), a+id);
			int ans = a[i/2] + a[(i/2) + 1];
			cout << ans/2 <<'\n';
		}
		++i;
		++id;
	}
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}








