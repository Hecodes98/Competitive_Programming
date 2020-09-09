#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
#define REPL(i,a,b) for(int i=a;i<a;++i)
#define REPLE(i,a,b) for(int i=a;i<=a;++i)
#define f first 
#define s second 
#define ALL(v) v.begin(), v.end()
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi; 
int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}

int n,k;

int a[1005];

bool bs(int x){
	int days=1,sum=0;
	for(int i = 0 ; i <=n ; ++i){
		if(sum+a[i] <= x){
			sum+=a[i];
		}else{
			sum =a[i];
			days++;
		}
	}
	return days == k;
}

void solve(){
	cin>>n>>k;
	k=k+1;
	int sum=0;
	for(int i = 0 ; i <=n ; ++i){
		cin >> a[i];
		sum+=a[i];
	}	
	int l = a[0], r = sum;
	while(l<r){
		int mid = l+((r-l)/2);
		if(bs(mid)) l=mid+1;
		else r=mid-1;
	}
	vi ng;
	int mx = -1;
	sum = 0;
	for(int i = 0 ; i <=n ; ++i){
		if(sum + a[i] <= l){
			sum+=a[i];
		}else{
			ng.push_back(sum);
			sum=a[i];
		}
		mx = max(mx, sum);
	}
	cout << mx << '\n';
	for(int i = 0 ; i <= n ; ++i){
		cout << ng[i] << '\n';
	}
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		cout << "Case " << i << ": ";
		solve();
	}
}
