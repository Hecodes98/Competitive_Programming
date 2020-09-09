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

bool v(int *a, int n){
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

void trp(int *a, int n){
	int temp = a[0];
	for (int i = 1; i < n; i++)
		a[i - 1] = abs(a[i] - a[i - 1]);
	a[n - 1] = abs(temp - a[n - 1]);
}

void solve(){
	int a[20];
	int n;
	cin >>n;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	int ct = 0;
	while(++ct <= 1000 && v(a,n)){
		trp(a,n);
	}
	if(v(a,n)){
		cout << "LOOP\n";
	}else{
		cout << "ZERO\n";
	}
}	

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}  






