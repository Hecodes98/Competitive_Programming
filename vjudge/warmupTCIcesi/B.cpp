#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
#define REPL(i,a,b) for(int i=a;i<a;++i)
#define REPLE(i,a,b) for(int i=a;i<=a;++i)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}


void solve(){
	int a;
	int x, y;
	for(int i = 0 ; i < 5 ; ++i){
		for(int j = 0 ; j < 5; ++j){
			cin >> a;
			if(a == 1){
				x = i;
				y = j;
			}	
		}
	}
		cout << abs(2-x) + abs(2 - y) << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
} 

