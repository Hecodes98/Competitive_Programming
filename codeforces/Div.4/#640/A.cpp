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
	int t;cin>>t;
	while(t--){
		deque<int> dv;
	 	int n;cin>>n;
		for(int i =10 ; i < 1000000 ; i*=10){
			int res = n%i;
			if(res == 0)continue;
			if(res == n){
			    dv.push_back(n);
			    break;	
			}
			dv.push_back(res);
			n=n-res;                                	
		}
		cout << dv.size() << '\n';
		for(int i = 0 ; i < dv.size() ; ++i){
			cout << dv[i] << '\n';
		}	
	}
}