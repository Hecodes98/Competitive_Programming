#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

ll gcd(ll a, ll b){
    return a==0 ? b : gcd(b%a, a);
}

int solve(ll *vc, ll n){
    ll g = 0;
    for (int i = 0 ; i < n; ++i) g = gcd(g, vc[i]);
    int ans = 0;
    for(ll i = 1 ; i*i <=g;++i){
        if(g%i == 0){
            ans++;
            if(i != g/i)ans++;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >>n;
    ll vc[n];
    ll a;
    for (int i = 0; i < n; ++i){
        cin >> a;
        vc[i]=a;
    }
    cout << solve(vc,n) << '\n';
}