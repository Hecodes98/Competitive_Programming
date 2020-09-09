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
	short n; cin >> n;
	int ng, pos;
	pos = ng = 0;
	for(int i = 0 ; i < n ; ++i){
		short a; cin >> a;
		if(a > 0) pos++;
		if(a < 0) ng++;
	}
	cout.precision(6);
	cout << fixed << (double)pos/n << '\n' << (double)ng/n << '\n' << (double)(n - (pos+ng))/n << '\n';
}