#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> matrix;
    short n;
    for (size_t i = 0; i < 3; i++)
    {
        matrix.push_back({});
        for (size_t j = 0; j < 3; j++)
        {
            cin >> n;
            matrix[i].push_back(n);
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
        }
    }

    return 0;
}