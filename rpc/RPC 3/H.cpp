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
	int n; cin >> n;
	stack<int> o, aux;
	for(int i = 0 ; i < 2*n; ++i){
		int a;cin>>a;
		o.push(a);
	}
	int mvs=0;
	while(o.size()){
		aux.push(o.top());
		o.pop();
		mvs++;
		while(o.size() && aux.size() && o.top() == aux.top()){
			o.pop();
			aux.pop();
			mvs++;
		}
	}
	if(aux.size())cout << "impossible\n";
	else cout << mvs <<'\n'; 
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}





