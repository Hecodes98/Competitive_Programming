#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

int gcd(int a, int b){
    return a==0 ? b : gcd(b%a, a);
}

int solve(int n){
    int ans = 0;
    for(int i = 1;i<=sqrt(n);++i){
        if(n%i == 0){
            if(n/i == i) ans+=i;
            else ans+=(n/i)+i;
        }
    }
    return ans;
}
int main()
{   ios::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    int n;
    while(t--){
        cin >> n;
        cout << solve(n) - n << '\n';
    }
}