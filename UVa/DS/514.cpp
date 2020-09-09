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

int a[1010];

void solve(){
	int n;
	while(cin>>n && n !=0){
		for(int i = 1 ; i <= n ;++i){
			a[i] =i;
		}
		while(true){
			stack<int>tst;
			bool ok = false;
			vi b(n);
			for(int i = 0 ; i < n ; ++i){
				cin>>b[i];
				if(b[i] == 0){
					ok = true;
					break;
				}
			}
			if(ok)break;
			for(int i = 1, j=0 ; i <= n ; ++i){
				tst.push(a[i]);
				int tmp = tst.top();
				while(tst.size() && tst.top() == b[j]){
					tst.pop();
					++j;
				}
			}
			if(!tst.size())cout << "Yes\n";
			else cout << "No\n";
		}
		cout << '\n';
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
