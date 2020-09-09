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

bool a[3020]={0};

void solve(){
	int n;
	while(cin>>n){
		int gs = ((n-1)*n)/2;
		ll b[n];
		for(int i = 0 ; i < n ; ++i){
			cin>>b[i];
			a[i] = 0;
		}	
		for(int i = 1 ; i < n ; ++i){
			a[abs(b[i]-b[i-1])] = 1;
		}
		bool ok=true;
		for(int i = 1 ; i < n ; ++i){ 
			if(a[i])continue;
			else ok=false;
		}
		if(ok)cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}






