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
	ll fb[10000];
	fb[0]=1; 
	fb[1]=1;       
    ll t = fb[1];
	ull sum=0;
	cout << "CRASH" << '\n';
	for(ll i = 2; t < 4000000;++i){
		fb[i]=fb[i-1]+fb[i-2];
		t=fb[i];
		if(t&1^1)sum+=t;
	}                   
	cout << sum << '\n';
}