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
	int n, m;
	cin >> n >> m;
	vector<vi> g(n);
	for(int i = 0 ; i < m ; ++i){
		int u,v;cin>>u>>v;
		--u,--v;
		g[u].push_back(v);
		g[v].push_back(u);
	}	
	vi d(n,n+1);
	d[0]=0;
	queue<int>q;
	q.push(0);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int v : g[u]){
			if(d[v] == n+1){
				d[v]=d[u]+1;
				q.push(v);
			}
		}
	}
	cout << d.back() -1 << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}



