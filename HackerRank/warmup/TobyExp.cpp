#include <iostream>
using namespace std;

long long mod = 1e9 + 7;

long long expo(long long b, long long N)
{
    long long res;
    if (N == 0)
        return 1;
    if (N % 2)
    {
        return (b * expo(b, N - 1)) % mod;
    }
    else
    {
        res = expo(b, N / 2) % mod;
        return (res * res) % mod;
    }
}
int main()
{
    long long b;
    long long N;
    cin >> b >> N;
    cout << expo(b, N) << "\n";
}