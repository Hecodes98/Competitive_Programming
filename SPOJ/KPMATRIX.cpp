#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i,b) for(int i=0;i<b;++i)
#define repv(i,a,b)for(int i=a;i<b;++i)
#define repve(i,a,b)for(int i=a;i<=b;++i)
#define repe(i,b) for(int i=0;i<=b;++i)
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

int a[255][255];
int sum[255][255]={0};

void solve(){
	int n,m;cin>>n>>m;
	int cnt=0;
	rep(i,n){
		rep(j,m){
			cin>>a[i][j];
			sum[i][j] = a[i][j];
		}
	}
	int l,r;cin>>l>>r;
	repv(j,1,n){
		if(j < n){
			sum[0][j] = sum[0][j-1]+sum[0][j];
			if(sum[0][j] >= l && sum[0][j] <= r)cnt++;
		}
		if(j < m){
			sum[j][0] = sum[j-1][0]+sum[j][0];
			if(sum[j][0]>=l&&sum[0][j]<=r)cnt++;
		}
	}
	rep(i,n){
		rep(j,m){
			sum[i+1][j+1] = a[i][j] + sum[i][j+1]+sum[i+1][j] - sum[i][j];
			if(sum[i+1][j+1] >= l && sum[i+1][j+1 <=r])cnt++;
			cout << sum[i][j] << " ";
			//for(int k = i ; k>=0 ; ++k){
			//	for(int h = j ; h>=0 ; ++h){
			//		if(sum[i+1][j+1] - sum[])
			//	}
			//}
		}
		cout << '\n';
	}
	DEBUG(sum[2][3]);
	cout << sum[2][3] - sum[1][3] << '\n';
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



