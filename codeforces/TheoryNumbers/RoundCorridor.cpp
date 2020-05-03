#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

ll gcd(ll a, ll b){
    return a==0 ? b : gcd(b%a, a);
}

int solve(){
    return 0;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m;
    int q;
    cin >> n >> m >> q;
    ll g = gcd(n,m);
    ll s[3];
    s[1] = n/g;
    s[2] = m/g;
    while(q--){
        ll sx,sy,ex,ey; cin >> sx >> sy >> ex >> ey;
        if((sy-1)/s[sx] == (ey-1)/s[ex])cout<<"YES\n";
        else cout<<"NO\n";
    }   
}