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
	int n1,n2;cin>>n1>>n2;
	ll sum1,sum2;
	for(int i = 0 ; i < n1 ; ++i){
		int a;cin>>a;
		sum1+=a;
	}
	for(int i = 0 ; i < n2 ; ++i){
		int a;cin>>a;
		sum2+=a;
	}
	if(sum1>sum2)cout<<"C1\n";
	else cout << "C2\n";
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}
