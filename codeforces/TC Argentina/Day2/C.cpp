#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define REPL(i,a,b) for(int i=a;i<b;++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
#define DEBUG(x) cerr << #x << " = " << (x) << endl;
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
	int n,p;cin>>n>>p;
	string s;cin>>s;
	string tst = s;
	for(auto &c : tst){
		if(c=='.')c='0';
	}
	bool ok = true;
	for(int i = p ; i < n ; i++){
		if(tst[i] != tst[i-p])ok=false;
	}
	if(!ok){cout << tst << '\n';return;}
	int i = 0;
	while(i < n && s[i] != '.')i++;
	if(i+p<n){
		tst[i]='1';
		cout << tst << '\n';
		return;
	}
	i = n-1;
	while(i >= 0 && s[i]!='.')i--;
	if(i-p >= 0){
		tst[i]='1';
		cout << tst << '\n';
		return;
	}
	cout << "No\n";
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	#ifndef ONLINE_JUDGE
		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}







