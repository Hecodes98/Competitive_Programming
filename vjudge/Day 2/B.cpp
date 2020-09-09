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

#define M_PI 3.14159265358979323846

const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

int a[100020];

void solve(){
	int y,p;
	int maxP = -1;
	int xy[2] = {0,0};
	while(cin >> y >> p && y && p){
		int tmp;
		for(int i = 0 ; i < p ; ++i){
			cin >> a[i];
		}
		for(int i = 0 ; i < p ; ++i){
			int pos = upper_bound(a,a+p,a[i]+(y-1))-a;
			int dis = pos - i;
			if(a[pos-1] - a[i] > y)continue;
			if(maxP == dis)continue;
			maxP = max(dis, maxP);
			if(maxP > tmp){
				xy[0] = i;
			   	xy[1] = pos-1;	
			}
			tmp = maxP;
		}
		cout << maxP << " " << a[xy[0]] << " " << a[xy[1]] <<'\n';
	}
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  






