#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<short> vec;
    short n, sum = 0;
    for (size_t i = 0; i < 3; i++)
    {
        cin >> n;
        vec.push_back(n);
    }
    sort(vec.begin(), vec.end());

    if (vec[0] == 5 && vec[1] == 5 && vec[2] == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}