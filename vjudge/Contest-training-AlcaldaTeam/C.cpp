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
	string s;cin>>s;
	int cn1=0,cn0=0;
	int n = s.length();
	for(int i = 0 ; i < n;++i){
		if(s[i]=='0')cn0++;
		else cn1++;
	}	
	int p0[n+1]={0};
	int p1[n+1]={0};

	if(s[0]=='0'){
		p0[0]=1;
		p1[0]=0;
	}else{
		p1[0]=1;
		p0[0]=0;
	}
	for(int i = 0 ; i < n;++i){
		if(s[i]=='0'){
			p0[i]=p0[i-1]+1;
			p1[i]=p1[i-1];
		}else{
			p1[i]=p1[i-1]+1;
			p0[i]=p0[i-1];
		}
	}
	int ans = inf;
	for(int i = 0 ; i < n ; ++i){
		ans = min(ans, p1[i]+ (cn0 -  p0[i]));
	}
	for(int i = 0 ; i < n ; ++i){
		ans = min(ans, p0[i]+ (cn1 -  p1[i]));
	}
	cout << ans << '\n';

}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	/*
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}







