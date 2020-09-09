#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define REPL(i,a,b) for(int i=a;i<b;++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
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

void solve(){
	int n;cin>>n;
	while(n--){
		int no=0;
		int ne=0;
		int m;cin>>m;
		for(int i = 0 ; i < m ; ++i){
			int x;cin>>x;
			if(x%2==0)ne++;
			else no++;
		}
		if(m%2==0){
			if(no > 0 && ne > 0)cout << "YES\n";
			else cout << "NO\n";
		}else{
			if(no > 0 && ne >=0)cout << "YES\n";
			else cout << "NO\n";
		}
	}
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



