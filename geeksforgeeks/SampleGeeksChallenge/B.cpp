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
	string s; cin>>s;
	int c=0;
	for(int i = 2; i < s.size() ; ++i){
		if(s[i] == 'g'){
			if(s[i-1] == 'f' && s[i-2] == 'g')++c;
		}
	}	
	int ans =c!=0?c:-1;
	cout <<ans<< '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}

