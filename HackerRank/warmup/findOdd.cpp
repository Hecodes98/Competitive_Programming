#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

int solve(int* m, int size){
    int ans = 0;
    for (size_t i = 0; i < size; ++i)
        ans^=m[i];
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a;
    int m[n];
    for (size_t i = 0; i < n; ++i){
        cin >> a;
        m[i]=a;
    }
    cout << solve(m,n) << '\n';
}
