#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
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
	int n;cin>>n;
	int a[n];
	int cnt=0;
	int ch=0;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	ch = a[0]<=a[1] ? 0 : 1;
	for(int i = 1 ; i < n-1 ; ++i){
		if(ch==0){
			if(a[i] <= a[i+1])continue;
			else{
				ch++;
			}
		}else if(ch==1){
			if(a[i]>=a[i+1])continue;
			else{
				ch++;
			}
		}
		if(ch == 2){
			ch = 0;
			cnt = i;
		}
	}
	cout << cnt << '\n';
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	#ifndef ONLINE_JUDGE
		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}




