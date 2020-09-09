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
		string s;cin>>s;
	vector <int> a;
	for(int i = 0 ; i < (int)s.size() ; i+=2){
		a.push_back(s[i]-'0');
	}
	sort(a.begin(),a.end());
	cout << a[0];
	for(int i = 1 ; i < a.size() ; ++i){
		cout << "+" << a[i];
	}
	cout << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
} 


