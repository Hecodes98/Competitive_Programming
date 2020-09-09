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

void solve(){
	int ans=0;
	int n,m;cin>>n>>m;
	vi a(n);
	queue<int> b,q;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		b.push(a[i]);
	}
	sort(a.begin(),a.end());
	for(int i = 0 ; i < n ; ++i)q.push(i);
	int idx = n-1;
	while(true){
		if(b.front() == a[idx] && q.front()==m){
			cout << ans+1 << '\n';
			break;	
		}else if(b.front()==a[idx]){
			++ans;
			b.pop();
			q.pop();
			--idx;
		}else{
			int p=b.front();
			b.pop();
			b.push(p);
			p=q.front();
			q.pop();
			q.push(p);
		}
	}	
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}  




