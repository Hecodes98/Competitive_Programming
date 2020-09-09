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
	int n,a;cin>>n;
	int MAX = -1;
	int qc=0;
	for(int i = 0 ; i < n ; ++i){
		cin >> a;
		if(a == MAX)qc++;
		else{
			int	tmpMAX = max(a,MAX);
			if(tmpMAX != MAX){
				qc=1;
				MAX = tmpMAX;
			}
			
		}
	}
	cout << qc << "\n";                         
}
int main(){
	#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	#endif   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  
