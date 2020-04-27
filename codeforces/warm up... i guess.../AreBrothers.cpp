#include <iostream>
using namespace std;

int main()
{
    string n, ln, equal;
    cin >> n >> ln;
    equal = ln;
    cin >> n >> ln;
    if (!equal.compare(ln))
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }

    return 0;
}