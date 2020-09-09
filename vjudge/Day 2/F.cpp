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

const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

int a[100005];

void solve(){
	int n;cin>>n;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];	
	}
	vi ans;
	for(int i = 0 ; i < n ; ++i){
		if(i == 0 || i == (n-1) || (a[i-1] < a[i])!=(a[i] < a[i+1])){
			ans.push_back(a[i]);	
		}
	}
	cout << ans.size() << '\n';
	for(auto i : ans){
		cout << i << " ";
	}
	cout <<'\n'; 
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}  





