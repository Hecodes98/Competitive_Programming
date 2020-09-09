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
	int n,k;cin>>n>>k;
	char a;
	int dis=0,cnt=0, cntF=0;
	for(int i = 0 ; i < n;++i){
		cin>>a;
		if(a=='1'){
			cntF+=cnt;
			dis=0;
			cnt=0;
		}else{
			++dis;
			if(dis > k<<1){
				cnt=dis/(k<<1);
				cnt = cnt + (dis-(k<<1))/k;
			}
		}
	}	
	cout << cntF+cnt << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}  

