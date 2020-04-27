#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == 46)
        {
            cout << 0;
            continue;
        }
        if (s[i] == 45)
        {
            if (s[i + 1] == 46)
                cout << 1;
            else
                cout << 2;
            i++;
        }
    }
    return 0;
}