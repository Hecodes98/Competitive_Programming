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

int a[1010];

const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

void solve(){
	int l1,r1,l2,r2,p1,p2,d1,d2;
	cin >> l1 >> r1 >> p1 >> d1;
	cin >> l2 >> r2 >> p2 >> d2;
	int k;cin>>k;
	int cnt=0;
	for(int i = 0 ; i < k ; ++i){
		if(d1 == 0){
			if(p1 == l1){
				d1 = 1;
				p1++;
			}else{
				--p1;
			}
		}else if(d1 == 1){
			if(p1 == r1){
				d1 = 0;
				p1--;
			}else{
				p1++;
			}
		}
		if(d2 == 0){
			if(p2 == l2){
				d2 = 1;
				p2++;
			}else{
				--p2;
			}
		}else if(d2 == 1){
			if(p2 == r2){
				d2 = 0;
				p2--;
			}else{
				p2++;
			}
		}
		if(p1 == p2)++cnt;
	}
	cout << cnt << '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}  


