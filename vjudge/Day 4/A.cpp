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

int a[120][2];
const int oo = 1e9+10;
const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

ll memo[100005][100];
int n,k;

void solve(){
	cin >> n >> k;
	vector<vector<int>> ar(n+1);
	int u,v;
	for(int i = 0 ; i < n-1 ; ++i){
		cin >> u >> v;
		ar[u].push_back(v);
		ar[v].push_back(u);
	}
	int max_lvl=0;
	int vis[n+1];
	queue<pi> q;
	q.push({1,0});
	pair<int,int> node;
	while(q.size()){
		node = q.front();q.pop();
		vis[node.first]=1;
		max_lvl = max(max_lvl, node.second);
		for(auto i : ar[node.first]){
			if(!vis[i])
				q.push({i, node.second+1});
		}
	}
	cout << max_lvl << '\n';
	
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  







