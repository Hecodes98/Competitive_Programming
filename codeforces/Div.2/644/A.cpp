#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i,b) for(int i=0;i<b;++i)
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

void solve(){
	int a[4];
	int ev=0;
	int zr=0;
	rep(i,4){
		cin>>a[i];
		if(a[i]&1^1)ev++;
		if(a[i]==0)zr++;
	}
	ev-=zr;
	if(ev == 0 && zr == 0 || zr == 4)cout << "Yes\n";
	else if(a[3]==0 && zr==1 && ev == 0)cout<<"Yes\n";
	else if(ev == 1 && zr==0) cout << "Yes\n";
	else if(ev == 2 && zr > 0) cout << "Yes\n";
	else if(ev==3 || ev==4) cout << "Yes\n";
	else cout << "No\n";
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





