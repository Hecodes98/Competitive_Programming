#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, max, min;
    cin >> a;
    max = min = a;
    for (size_t i = 0; i < 3; i++)
    {
        cin >> a;

        if (a < min)
        {
            min = a;
        }
        else if (a > max)
        {
            max = a;
        }
    }
    cout << min << " " << max;

    return 0;
}