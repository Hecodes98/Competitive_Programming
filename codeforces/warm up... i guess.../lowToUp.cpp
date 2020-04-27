#include <iostream>
using namespace std;

int main()
{

    char a;
    cin >> a;
    if (a >= 97)
    {
        a = (int)a - 32;
    }
    else
    {
        a = (int)a + 32;
    }

    cout << (char)a;
    return 0;
}