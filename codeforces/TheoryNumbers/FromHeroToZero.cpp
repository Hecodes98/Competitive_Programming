#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

int solve(ll n, ll k){
    ll ans = 0;
    while(n!=0){
        if(n%k == 0){
            n/=k;
            ans++;
        }else{
            ans+=n%k;
            n = n -(n%k);
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    ll n,k;
    while(t--){
        cin >> n >> k;
        cout << solve(n,k) << '\n';
    }
}
