#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    short T;
    int X, Y;
    long long sum = 0;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        if (X > Y)
        {
            int tmp = X;
            X = Y;
            Y = tmp;
        }
        for (size_t i = X + 1; i < Y; i++)
        {
            if (i & 1)
            {
                sum += i;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
}