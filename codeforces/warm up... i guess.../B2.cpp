#include <iostream>
using namespace std;

int main()
{
    short n;
    cin >> n;
    if (n > 1)
    {
        for (size_t i = 2; i <= n; i += 2)
            cout << i << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}