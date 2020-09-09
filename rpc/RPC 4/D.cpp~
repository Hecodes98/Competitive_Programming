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
	int w,r1,r2,r3;
	cin>>w>>r1>>r2>>r3;
	int n;cin>>n;
	int ans = 0;
	while(n--){
		double x,y;cin>>x>>y;
		double dist = x*x + y*y;
		if(dist<(double)r1*(double)r1){
			ans+=50;
		}else if(dist>(double)r3*(double)r3){
			ans+=0;
		}else{
			int cuadr;
			if(x>0&&y>0)cuadr=1;
			else if(x<0&&y>0)cuadr=2;
			else if(x<0&&y<0)cuadr=3;
			else cuadr = 4;
			double ang = atan(y/x)*180.0/3.1415926;
			if(cuadr==2||cuadr==3)ang+=180.0;
			else if(cuadr == 4)ang+=360.0;
			double ba = 360.0/(double)w;
			int k = (int)(ang/ba)+1;
			if(dist>(double)r1*(double)r1 && dist<(double)r2*(double)r2){
				ans+=k*2;
			}else if(dist>(double)r2*(double)r2&&dist<(double)r3*(double)r3){
				ans+=k;
			}

		}
	}
	cout << ans << '\n';
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




