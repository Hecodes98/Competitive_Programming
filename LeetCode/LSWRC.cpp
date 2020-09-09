#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i,b) for(int i=0;i<b;++i)
#define reple(i,b) for(int i=0;i<=b;++i)
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

const int d4x[4]={-1,0,1,0}, d4y[4]={0,1,0,-1};
const int d8x[8]={-1,-1,0,1,1,1,0,-1}, d8y[8]={0,1,1,1,0,-1,-1,-1};

int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}

int j = 0;

int lengthOfLongestSubstring(string s) {
    int ans=0;
    int i = 0;
    map<char, int> a;
    for(i;i<(int)s.size() ; ++i){
        if(a[s[i]] == 0){
            a[s[i]]=i+1;
        }else{
			if(j < a[s[i]]) j = a[s[i]];
            a[s[i]]=i+1;
        }
        ans = max(ans , i+1 - j);
    }
    return ans;
}
void solve(){
	string sr;cin>>sr;
	cout << lengthOfLongestSubstring(sr) << '\n';
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





