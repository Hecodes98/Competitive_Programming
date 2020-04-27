#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double a, b, c;
    cin >> a >> b;
    c = abs(a - b);
    cout << min(a, b) + ceil(c / 2) << endl;
    return 0;
}