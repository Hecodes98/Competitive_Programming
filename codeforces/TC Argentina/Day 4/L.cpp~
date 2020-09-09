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

const int mXN = 1000;
int sp[mXN+5];
bool primes[2*mXN] = {0};
vi pr;
void solve(){
	int n,k;cin>>n>>k;
	for(int i=2;i<=mXN;++i){
		if(sp[i] == 0){
			sp[i]=i;
			pr.push_back(i);
			primes[i]=1;
		}
		for(int j=0 ; j<(int)pr.size() && pr[j]<=sp[i] && i*pr[j]<=mXN ; ++j){
			sp[i*pr[j]]=pr[j];
		}
	}

	int cnt=0;
	for(int i = 0 ; (pr[i]+pr[i+1]+1) <= n ; ++i){
		if(primes[pr[i]+pr[i+1]+1])cnt++;
	}
	if(cnt >= k)cout << "Yes\n";
	else cout << "No\n";
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



