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

const int oo = 1e9+10;
const int mod = 7901;
const int mXN = 105;
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

char a[mXN][mXN];
int vis[mXN][mXN];
int n,m;
int digit[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

void dfs(int x, int y){
	int tx, ty;
	a[x][y] = '*';
	for(int i = 0 ; i < 8 ; ++i){
		tx = x + digit[i][0];
		ty = y + digit[i][1];
		if(tx >-1 && tx < n && ty>-1 && ty < m){
			if(a[tx][ty] == '@'){
				dfs(tx,ty);
			}
		}
	}
}


void solve(){
	while(cin >> n >> m && n != 0 && m != 0){
		for(int i = 0 ; i < n ; ++i){
				cin >> a[i];
		}
		int ans = 0;
		for(int i = 0 ; i < n ; ++i){
			for(int j = 0 ; j < m ; ++j ){
				if(a[i][j] == '@'){	
					dfs(i,j);
					++ans;
				}
			}
		}
		cout << ans << '\n';
	}
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  








