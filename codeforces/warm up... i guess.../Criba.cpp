#include <iostream>
#include <vector>

using namespace std;

vector<int> criba(int n)
{
    int primo_actual;
    vector<int> vc;
    for (size_t i = 2; i <= n; i++)
    {
        if (i == 2 || i & 1)
            vc.push_back(i);
    }

    if (n == 2 || n == 3)
        return vc;

    vector<int>::iterator itr = vc.begin(); //puntero al primero elemento
    primo_actual = *(itr + 1);

    while ((primo_actual * primo_actual) < n)
    {
        vector<int>::iterator itrnext = itr + 2;
        for (; itrnext <= vc.end(); itrnext++)
        {
            if ((*itrnext % primo_actual) == 0)
                vc.erase(itrnext);
        }
        itr++;
        primo_actual = *(itr + 1);
    }

    return vc;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nump;
    nump = criba(n);
    if (nump.back() == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}