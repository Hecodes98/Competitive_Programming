#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, h;
    cin >> b >> a;
    h = (2 * a) / b;
    while ((b * h) / 2 < a)
    {
        h++;
    }
    cout << h << '\n';
}