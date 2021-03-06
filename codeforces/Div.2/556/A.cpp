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

int a[40];
int b[40];

void solve(){
	int n,m,r;cin>>n>>m>>r;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	for(int i = 0 ; i < m ; ++i){
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+m, greater<int>());
	if(a[0] < b[0]){
		int by=0;
		while(r>=a[0]){
			r-=a[0];
			by++;
		}
		cout << by << endl;
		r+=by*b[0];
	}
	cout << r << '\n';
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





