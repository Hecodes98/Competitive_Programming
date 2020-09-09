#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
#define REPL(i,a,b) for(int i=a;i<a;++i)
#define REPLE(i,a,b) for(int i=a;i<=a;++i)
#define f first 
#define s second 
#define ALL(v) v.begin(), v.end()
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi; 
int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}
void solve(){
	string s;cin >>s;
	int lR = 0, uR=0;
	for(char&i : s){
		if(i=='L')lR--;
		if(i=='R')lR++;
		if(i=='U')uR++;
		if(i=='D')uR--;
	}
	cout << s.size() - abs(lR) - abs(uR) << '\n';
	for(char&i : s){
		if(lR < 0 && i=='L'){
	    	lR++;
			continue;
		}
		if(lR > 0 && i=='R'){
	    	lR--;
			continue;
		}
		if(uR > 0 && i=='U'){
	    	uR--;
			continue;
		}
		if(uR < 0 && i=='D'){
	    	uR++;
			continue;
		}
		cout << i;
	}
	cout << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}