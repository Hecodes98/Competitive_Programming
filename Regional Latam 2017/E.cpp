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

string s;
int d;

int memo[1010][1010];

bool dp(int idx, int mod){
	if(idx == s.size()) return mod == 0;
	if(memo[idx][mod] != -1)return memo[idx][mod];
	int ans = 0;
	if(s[idx] == '?'){
		int i = idx==0?1:0;
		for(i ; i <= 9 ; ++i){
			ans |= dp(idx+1, (mod*10+i)%d);
			if(ans){
				s[idx] = char('0'+i);
				break;
			}
		}	
	}else{
		ans |= dp(idx+1, (mod*10 +(s[idx]-'0'))%d);
	}
	return memo[idx][mod] = ans;
}

void solve(){
	while(cin>>s>>d){
		memset(memo ,-1 , sizeof memo);
		if(dp(0,0)){
			cout << s << '\n';
		}else cout << "*\n";

	}
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



