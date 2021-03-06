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
vi parent(1010,-1);

int find(int x){
	if(parent[x]<0)return x;
	return parent[x] = find(parent[x]);
}
void Un(int x, int y){
	int xset = find(x);
	int yset = find(y);
	if(xset == yset)return;
	if(parent[xset]>parent[yset])swap(xset,yset);
	parent[xset]+=parent[yset];
	parent[yset] = xset;
}
void solve(){
	int n,m,k;cin>>n>>m>>k;
	vi c(k);
	for(int i = 0 ; i < k ; ++i){
		cin>>c[i];--c[i];
	}
	for(int i = 0 ; i < m ; ++i){
		int x,y;cin>>x>>y;--x;--y;
		Un(x,y);
	}
	vi s;
	int r = n;
	for(int i = 0 ; i < k ; ++i){
		s.emplace_back(-parent[find(c[i])]);
		r-=(-parent[find(c[i])]);
	}	
	sort(ALL(s));
	s.back()+=r;
	int ans = 0;
	for(int i = 0 ; i < s.size() ; ++i){
		ans+=s[i]*(s[i]-1)/2;
	}
	ans-=m;
	cout << ans << '\n';
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






