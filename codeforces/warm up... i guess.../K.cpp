#include <iostream>
#include <cmath>

using namespace std;

long long factorial(long long n)
{
    if (n == 2)
    {
        return 2;
    }
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    short t;
    cin >> t;
    long long n;
    while (t--)
    {
        cin >> n;
        cout << factorial(n) << endl;
    }
    return 0;
}