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
	int n;cin>>n;
	for(int i = n ; i > 0 ; --i){
		for(int j = 1 ; j <= n; ++j){
			if(j < i) cout <<  " ";
			else cout << "#";
		}		
		cout << '\n';
	}
}