#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define reple(i,b) for(int i=0;i<=b;++i)
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

const int mXN = 105;

int a[mXN];
int len[mXN][mXN];
int f[mXN][mXN];
vi increasing;

void solve(){
	int n;cin>>n;
	rep(i,1,n){cin>>a[i];}
	rep(i,1,n){
		increasing.clear();
		for(int j = i ; j <= n ; ++j){
			if(increasing.empty() || a[j] > increasing.back())increasing.push_back(a[j]);
			else{
				auto t = lower_bound(increasing.begin(), increasing.end(), a[j]);
				*t = a[j];
			}
			len[i][j]=increasing.size();
		}
	}
	rep(k,1,n)rep(i,1,n){
			int j = 1;
			f[k][i]=0;
			while(len[j][i] >= k)
				f[k][i] = max(f[k][i], f[k][j-1]+len[j][i]),j++;
		}
		rep(i,1,n){
			cout << f[i][n];
			if(i<n)cout <<" "; 
		}
	cout << '\n';
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






