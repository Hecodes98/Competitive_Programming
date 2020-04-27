#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a(10, 0);
    int n, k;
    int ans = 0;
    int flag = 0;
    int x;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        a[x]++;
    }
    for (int i = n; i < 1000000; i++)
    {
        int t = i;
        flag = 0;
        while (t)
        {
            int p = t % 10;
            if (a[p] != 0)
            {
                flag = 1;
                break;
            }
            t /= 10;
        }
        if (flag == 1)
            continue;
        else
        {
            ans = i;
            break;
        }
    }
    cout << ans;
}