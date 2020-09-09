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

const int d4x[4]={-1,0,1,0}, d4y[4]={0,1,0,-1};
const int d8x[8]={-1,-1,0,1,1,1,0,-1}, d8y[8]={0,1,1,1,0,-1,-1,-1};

int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}

bool vis[55]={0};
char ans[55][55];

vector<vi>tmp(55);

void dfs(int i, vector<vi> adj, int v){
	vis[v]=1;
	for(int u : adj[v]){
		if(!vis[u]){
			dfs(i,adj,u);
			tmp[i].emplace_back(u);
			ans[i][u]='Y';
		}
	}
}

void solve(){
	int n;cin>>n;
	char a[n+1][2];
	for(int i = 0 ; i < 2 ;  ++i){
		for(int j = 0 ; j < n ; ++j){
			cin>>a[j][i];
		}
	}
	for(int i = 0 ; i < n ; ++i){
		ans[i][i] = 'Y';
	}
	vector<vi> adj(n);
	for(int i = 1 ; i <= n-1 ; ++i){
		
		//cout << i << '\n' << a[i-1][0] <<' '<< a[i][0] << a[i+1][0] << '\n';
		//cout << a[i-1][1] << ' ' << a[i][1] <<' '<< a[i+1][1] << '\n';

		if(a[i][0] == 'Y' && a[i+1][1] == 'Y'){
			adj[i+1].emplace_back(i);
		}
		if(a[i][1] == 'Y' && a[i+1][0] == 'Y'){
			adj[i].emplace_back(i+1);
		}
		if(a[i][0] == 'Y' && a[i-1][1] == 'Y'){
			adj[i-1].emplace_back(i);
		}
		if(a[i][1] == 'Y' && a[i-1][0] == 'Y'){
			adj[i].emplace_back(i-1);
		}
	}
	for(int i = 0 ; i < n ; ++i){
		dfs(i, adj,i);
		memset(vis, 0, sizeof vis);
	}
	int idx = 0;
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < n ; ++j){
			if(ans[i][j]=='Y')cout << ans[i][j];
			else cout << "N";
			ans[i][j]='N';
		}
		cout << '\n';
	}
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		cout << "Case #" << i << ":\n";
		solve();
	}
}



