
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

ll best =5e18;

void check(ll x1, ll y1 , ll x2 , ll y2, ll x3 , ll y3){
	ll w1 = x1+x2+x3;
	ll h1 = max(max(y1,y2),y3);
	ll area = w1*h1;
	if(y1>=y2){
		ll w2 = max(x1+x2,x3);
		ll h2 = y1 + y3;
		area = min(area,w2*h2);
	}
	best = min(best, area);
}

void solve(){
	ll a[4], b[4];
	best = 5e8;
	cin >> a[1] >> b[1] >> a[2] >> b[2] >>a[3] >> b[3];
	int p[3] = {1,2,3};
	do{
		for(int k = 0 ; k < 8 ; ++k){
			ll x[4], y[4];
			for(int i = 1 ; i <=3 ; ++i){
				x[i] = a[p[i-1]];
				y[i] = b[p[i-1]];
			}
			if(k&1) swap(x[1],y[1]);
			if(k&2) swap(x[2],y[2]);
			if(k&4) swap(x[3],y[3]);
			check(x[1],y[1],x[2],y[2],x[3],y[3]);
		}
	}while(next_permutation(p,p+3));
	cout << best << '\n';
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





