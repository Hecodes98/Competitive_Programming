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
   		int a, n, b;cin >> a >> n >> b;
		int cn=1;
		char l = 'a';
		for(int i = 0 ; i < a ; ++i){
			if(cn == b){
				cout << l;	
				l = l-(b-1);
				cn=1;
			}
			else{
				cout << l;
				l++;
				cn++;
			}
		}
		cout << '\n';
	}
}
