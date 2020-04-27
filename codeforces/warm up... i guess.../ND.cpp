#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string N;
        cin >> N;
        for (unsigned long long i = 0; i < N.size(); i++)
        {
            cout << N[i];
            if (i + 1 != N.size())
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}