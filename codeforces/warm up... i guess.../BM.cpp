#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, result;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> n;
            if (n == 1)
            {
                result = abs(i - 2) + abs(j - 2);
            }
        }
    }
    cout << result << endl;
    return 0;
}