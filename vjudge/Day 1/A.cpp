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

int a[1010];

const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

void solve(){
	int n;cin >> n;
	set<int>a;
	set <int> :: iterator itr; 
	for(int i = 0 ; i < n ; ++i){
		int x;cin>>x;
		a.insert(x);
	}	
	itr = a.begin();
	++itr;
	cout << *itr << '\n';
		}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  



