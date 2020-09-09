#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}
int solve(int a, int b){
 
    return 0;
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		cout << k + ((k-1)/(n-1)) << '\n';
	}
}