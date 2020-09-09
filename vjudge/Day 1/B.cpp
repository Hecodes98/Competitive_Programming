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

int a[1005];

const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

bool cmp(int n, int m){
	string s;
	cout << "1 " << n <<  " " << m << endl;
	cin >> s;
	return s[0] == 'Y';
}

void solve(){
	int n;cin>>n;
	for(int i = 0 ; i < n ; ++i){
		a[i] = i+1;
	}
	sort(a,a+n, cmp);
	cout << "0";
	for(int i = 0 ; i < n ; ++i){
		cout << " " << a[i];
	}
	cout << endl;
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;t=1;
	while(t--){
		solve();
	}
}  





