#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i,b) for(int i=0;i<b;++i)
#define reple(i,b) for(int i=0;i<=b;++i)
#define mst(a,b) memset(a, b, sizeof a)
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

int a[125];

void solve(){
	int n;cin>>n;
	rep(i,n)cin>>a[i];
	pi source;
	pi target;
	cin>>source.f>>source.s;
	cin>>target.f>>target.s;
	queue<pi> ql;
	ql.push(source);
	int dist[125][125];
	memset(dist, -1, sizeof dist);
	dist[source.f][source.s]=0;
	while(!ql.empty()){
		pi u = ql.front();ql.pop();
		vector<pi> moves;
		if(u.f > 1) moves.emplace_back(u.f-1, min(u.s, a[u.f-1]));
		if(u.f < n) moves.emplace_back(u.f+1, min(u.s, a[u.f+1])), DEBUG(u.f);
		if(u.s < a[u.f]) moves.emplace_back(u.f, u.s+1);
		if(u.s > 0) moves.emplace_back(u.f, u.s-1);
		if(u.s == 0 && u.f > 1) moves.emplace_back(u.f-1, a[u.f-1]);
		if(u.s == a[u.f] && u.f < n) moves.emplace_back(u.f+1, 0);
		for(auto v : moves){
			if(dist[v.f][v.s] == -1){
				ql.push(v);
				dist[v.f][v.s] = dist[u.f][u.s]+1;
			}
		}	
	}
	
	rep(i,4){
		rep(j,31){
			cout << dist[i][j] << ' ';
		}
		cout << '\n';
	}

	cout << dist[target.f][target.s] << '\n';
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	#ifndef ONLINE_JUDGE
		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}





