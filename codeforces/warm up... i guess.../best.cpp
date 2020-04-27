#include <iostream>
using namespace std;

int main()
{
    unsigned long long a, min;
    int cont;
    string names[] = {"Amr", "Waleed", "Mustafa", "Youssef"};
    bool flag = false;
    cin >> a;
    min = a;
    cont = 0;
    for (size_t i = 1; i < 4; i++)
    {
        cin >> a;
        if (a < min)
        {
            flag = false;
            min = a;
            cont = i;
        }
        else if (a == min)
            flag = true;
    }
    if (flag)
        cout << "We are the best";
    else
        cout << names[cont];
    return 0;
}