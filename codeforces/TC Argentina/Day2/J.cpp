#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define REPL(i,a,b) for(int i=a;i<b;++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
#define DEBUG(x) cerr << #x << " = " << (x) << endl;
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

void solve(){
	ll n;
	ll k,mid=0;
	cin>>n>>k;
	n--;k--;
	ll ans = (k*(k+1))/2;
	if(n==0)cout << "0\n";
	else if(n<=ans){
		ll l=1, r=k+1;
		while(l+1<r){
			mid = l+(r-l)/2;
			ans = ((k+mid)*(k-mid+1)/2);
			if(ans>=n){
				l=mid;
			}else{
				r=mid;
			}
		}
		cout << k + 1 - l << '\n';
	}else cout << "-1\n";
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	#ifndef ONLINE_JUDGE
		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}






