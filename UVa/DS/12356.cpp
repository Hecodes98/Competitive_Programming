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

int l[100020];
int r[100020];
void solve(){
	int n, q;

	while(cin >> n >> q && n && q){
		for(int i = 0 ; i <= n ; ++i){
			l[i]=i-1;
			r[i]=i+1;
		}
		for(int i = 0 ; i < q ; ++i){
			int x,y;cin>>x>>y;
			if(l[x] < 1)cout << "* ";
			else cout << l[x] << " ";
			if(r[y] > n)cout << "*\n";
			else cout << r[y] << '\n';
			r[l[x]] = r[y];
			l[r[y]] = l[x];
		}
		cout << "-\n";
	}
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}






