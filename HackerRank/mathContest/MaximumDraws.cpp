#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
            cout << "2" << endl;
        else
            cout << n + 1 << endl;
    }
}