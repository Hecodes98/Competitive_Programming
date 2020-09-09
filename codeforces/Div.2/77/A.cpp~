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
	int c=1;
	char tmp=s[0];
	for(int i = 1 ; i < s.size() ; ++i){
		if(s[i] != tmp){
			tmp = s[i];
			c=1;
		}
		else ++c;
		if(c == 7){
			cout <<"YES\n";
		   	return;
		}	
	}
	cout << "NO\n";
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  

