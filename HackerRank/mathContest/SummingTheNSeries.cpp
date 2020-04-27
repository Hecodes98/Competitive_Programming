#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1e18

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    short t;
    ll MOD = 1e9 + 7, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        n = ((n % MOD) * (n % MOD)) % MOD;
        cout << n << endl;
    }
}
