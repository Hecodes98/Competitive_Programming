#include <iostream>
using namespace std;

int main()
{
    int N, Q;
    short a, b;
    cin >> N >> Q;
    cout << N;
    while (Q--)
    {
        cin >> a >> b;
        for (size_t i = 1; i < a; i++)
            cout << "0";
        cout << b;
    }
    cout << endl;
    return 0;
}