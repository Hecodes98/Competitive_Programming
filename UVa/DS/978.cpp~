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

multiset<int,greater<int>>sgm;
multiset<int,greater<int>>sbm;

void compare(vi a, vi b){
	for(int i = 0 ; i < a.size() ; ++i){
		if(a[i] > b[i]){
			sgm.insert(a[i]-b[i]);
		}
		if(a[i] < b[i]){
			sbm.insert(b[i]-a[i]);
		}
	}
}

void solve(){
	int b,sg,sb;cin>>b>>sg>>sb;
	for(int i = 0 ; i < sg ; ++i){
		int x;cin>>x;
		sgm.insert(x);
	}	
	for(int i = 0 ; i < sb; ++i){
		int x;cin>>x;
		sbm.insert(x);
	}
	while(1){
		int mxN = min(b, min((int)sgm.size(), (int)sbm.size()));
		if(mxN == 0)break;
		vi a;
		vi b;
		for(int i = 0 ; i < mxN ; ++i){
			int x = *sgm.begin();
			sgm.erase(x);
			int y = *sbm.begin();
			sbm.erase(y);
			a.emplace_back(x);
			b.emplace_back(y);
		}
		compare(a,b);
	}
	DEBUG(sgm.size());
	DEBUG(sbm.size());
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





