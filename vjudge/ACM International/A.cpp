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

#define M_PI 3.14159265358979323846

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

void solve(){
	ll n,m;
    cin >>n>> m;
    n=n*n*M_PI;
		m=m*m*M_PI;
    m=m*2;
    if(n>m)cout<<"1\n";
    else cout <<"2\n";
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}  

