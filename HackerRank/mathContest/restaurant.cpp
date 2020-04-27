#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a,a);
}

void solve(int a, int b){
    int ans = gcd(a,b);
    cout << a/ans*b/ans << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    int a,b;
    while(t--){
        cin >> a >> b;
        solve(a,b);
    }
}