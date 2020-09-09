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
	ll n;cin>>n;
	ll sum = 1;
	int cnt = 0;
	set<int> rep;
	if(n % 5 == 0){
		cout << "-1\n";
		return;
	}
	for(int i = 0 ; i < 10000 ; ++i){
		if(n == 1){
			cout << cnt << '\n';
			return;
		}
		if(rep.count(n)){
			cout << "-1\n";
			return;
		}else rep.insert(n);
		if(n%6==0){
			n/=6;
			cnt++;
		}else{
			n*=2;
			cnt++;
		}
	}
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}






