#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

int gcd(int a, int b){
    return a==0 ? b : gcd(b%a, a);
}

int solve(int a, int b){
    int ans = 1, n;
    int g = gcd(a,b);
    for(int i = 2;i<=sqrt(g);++i){
        n = 0;
        while(g%i==0){
            n++;
            g/=i;
        }
        ans*=(n+1);
    }
    if( g != 1 ) ans*=2;
    return ans;
}
int main()
{   ios::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    int a, b;
    while(t--){
        cin >> a >> b;
        cout << solve(a,b) << '\n';
    }
}