#include <iostream>

using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        while (N)
        {
            cout << N % 2;
            N /= 2;
        }
        cout << endl;
    }
}