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

int cnt[4] = {0};

void solve(){
	int N,n;cin>>N>>n;
	int a[N][N],b[n][n], c[n][n], d[n][n], e[n][n];	
	for(int i = 0 ; i < N ; ++i){
		for(int j = 0 ; j < N ; ++j){
			cin >> a[i][j];
		}
	}
	cout <<'\n'; 
	for(int i = 0, k=n-1 ; i < n ; ++i, --k){
		for(int r = n-1, j=0; j<n ; ++j, --r){
			cin >> b[i][j];
			c[j][r] = b[i][j];
			d[k][r] = b[i][j];
			e[i][k] = b[i][j];
		}
		cout << '\n';
	}
	cout << '\n';
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < n ; ++j){
			cout << b[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << endl;
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < n ; ++j){
			cout << c[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << endl;
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < n ; ++j){
			cout << d[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << endl;
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < n ; ++j){
			cout << e[i][j] << ' ';
		}
		cout << '\n';
	}

	/*

	for(int i = n-1 ; i >= 0 ; --i){
		for(int j = n-1 ; j>=0 ; --j){
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
		cout <<'\n'; 
	for(int i = n-1 ; i >= 0 ; --i){
		for(int j = 0 ; j<n ; ++j){
			cout << a[j][i] << " ";
		}
		cout << '\n';
	}
	*/
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}







