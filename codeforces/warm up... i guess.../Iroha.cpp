
#include <iostream>
using namespace std;

int Grid(int m, int n, int A, int W, long long mod)
{
    long long count[m][n] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= (m - A))
            {
                if (j < W)
                {
                    count[i][j] = 0;
                }
                else
                {
                    count[i][j] = 1;
                }
            }
            else
                count[i][j] = 1;
        }
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (count[i][j] == 1)
            {
                count[i][j] = (count[i - 1][j] % mod + count[i][j - 1] % mod) % mod;
            }
        }
    }
    return count[m - 1][n - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long H, W, A, B;
    cin >> H >> W >> A >> B;
    long long mod = (1e9) + 7;
    cout << Grid(H, W, A, B, mod);
    return 0;
}