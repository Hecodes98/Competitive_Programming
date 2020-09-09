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

void solve(){
	int n,q;
	int j = 0;
	while(cin >> n >> q && n != 0 && q != 0){
		int a[n];
		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];			
		}
		sort(a,a+n);
		++j;
		cout << "CASE# " << j << ":" <<'\n';
		for(int i = 0 ; i < q ; ++i){
			int x;cin>>x;
			int l=0,r=n-1;
			while(l<=r){
				int mid = l + ((r-l)/2);
				if(a[mid]>=x)r=mid-1;
				else l = mid+1;
			}
			if(a[l] == x){
				cout << x << " found at " << l+1 << '\n';
			}else{
				cout << x << " not found\n";
			}
		}
	}	
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  



