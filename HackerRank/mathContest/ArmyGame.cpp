#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    short n, m;
    cin >> n >> m;
    n = ceil((double)n / 2);
    m = ceil((double)m / 2);
    cout << n * m << endl;
    return 0;
}