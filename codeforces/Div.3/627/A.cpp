#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
int solve(ll a, ll b){
	return (b-a%b)%b;
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n;cin >> n;
		bool b0=0,b1=0;
		for(int i = 0;i < n; ++i){
			int a;cin>>a;
			if(a&1) b0=1;
			else b1=1;
		}
		cout << ((b0&&b1)?"NO":"YES") << "\n";
	}       
}