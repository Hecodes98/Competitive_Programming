#include <iostream>

using namespace std;

bool difference(int n)
{
    string s = to_string(n);
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = i + 1; j < 4; j++)
        {
            if (s[i] == s[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    n++;
    while (difference(n))
    {
        n++;
    }
    cout << n;
    return 0;
}