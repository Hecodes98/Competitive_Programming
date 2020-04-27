#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    short n, t;
    cin >> n >> t;
    cin >> s;
    for (size_t i = 0; i < t; i++)
    {
        for (size_t j = 0; j < n - 1; j++)
        {
            if (s[j] == 66 && s[j + 1] == 71)
            {
                s[j] = 71;
                s[j + 1] = 66;
                j++;
            }
        }
    }
    cout << s;
    return 0;
}