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
    ll sum=0, mn=1e16, mx=-1e16;
    ll vc[5];
    ll a;
    for(int i = 0; i < 5 ; ++i){
        cin >> a;
        sum+=a;
        vc[i]=a;
    }
    for(int i = 0; i < 5; ++i){
        mn = min(mn, sum-vc[i]);
        mx = max(mx, sum-vc[i]);    
    }
    cout << mn << " " << mx << '\n';
}
