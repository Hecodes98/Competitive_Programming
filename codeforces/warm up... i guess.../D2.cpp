#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, e, p, ng, v;
    e = p = ng = 0;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> v;
        if (v % 2 == 0)
            e++;
        if (v > 0)
            p++;
        else
        {
            if (v != 0)
                ng++;
        }
    }
    cout << "Even: " << e << endl
         << "Odd: " << n - e << endl
         << "Positive: " << p << endl
         << "Negative: " << ng << endl;

    return 0;
}