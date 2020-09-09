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

void solve(){
	int n,m;cin>>n>>m;
	vector<vi>dist(n+1, vi(n+1,1e9));
	for(int i = 0 ; i < n ; ++i)dist[i][i]=0;
	vector<tuple<int,int,int>>cnctds;
	for(int i = 0 ; i < m ; ++i){
		int a,b,c;cin>>a>>b>>c;
		dist[a][b] = dist[b][a] = c;
		cnctds.emplace_back(a,b,c);
	}
	//floyd warshall
	for (int k = 1; k <= n; ++k) {
      for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
          dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
      }
    }
	bool ok = false;
	for(auto i:cnctds){
		if(dist[get<0>(i)][get<1>(i)] != get<2>(i))ok=true;
	}
	if(!ok){
		cout << m << '\n';
		for(auto i:cnctds){
			cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << '\n';
		}
	}else{
		cout << "Impossible\n";
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
		cout << "Case #" << i << ": ";
		solve();
	}
}


