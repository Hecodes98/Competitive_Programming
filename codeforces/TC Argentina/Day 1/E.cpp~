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

int a[100005];
void solve(){
	int n;cin>>n; 
	for(int i = 0 ; i < n ; ++i){
		cin>>a[i];
	}
	int ne=a[0],no=a[n-1];
	int b[2]={0,0};
	int i = 0 , j = n-1;
	while(true){
		if(ne > no){
			no+=a[--j];
			b[1]++;
		}else if(no>=ne){
			ne+=a[++i];
			b[0]++;
		}
		if(i>j)break;
	}
	cout << b[0] << " " << b[1] << '\n';
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




