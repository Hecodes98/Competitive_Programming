#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1e18
#define MOD 1234567

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n, a, res;
    cin >> t;
    while (t--)
    {
        res = 1;
        cin >> n;
        n--;
        for (size_t i = 1; i <= n; ++i)
        {
            cin >> a;
            res = (res * a) % MOD;
        }
        cout << res << endl;
    }
}
