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

void solve(){
	int n,k;cin>>n>>k;
	vi a;
	vi b;
	int cnt =0;
	for(int i = 0 ; i < n ; ++i){
		int x;cin>>x;
		if(x % k){
			b.push_back(x);	
		}
	}
	sort(b.rbegin(), b.rend());
	if(b.size() == 0){
		cout << cnt << '\n';
		return;
	}
	int x = 1;
	cnt = 1;
	for(int i = 0 ; i < b.size() ; ++i){
		if(b[i]+x % k == 0){
			cnt++;
			x++;
		}else{
			int val = (b[i]+x - k);
			x += k - val;
			cout << (k - val) << '\n';
			cnt+=x;
		}
	}
	cout << cnt << '\n';

}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}








