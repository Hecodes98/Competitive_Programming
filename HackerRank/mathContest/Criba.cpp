#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    long long sn = sqrt(1e15) + 10;
    vector<bool> is_prime(sn, true);
    vector<long long> primes;
    primes.push_back(2);
    for (long long i = 3; i < sn; i += 2)
    {
        if (!is_prime[i])
            continue;
        primes.push_back(i);
        for (long long j = i * i; j < sn; j += i)
            is_prime[j] = false;
    }
    for (int i = 0; i < primes.size() && primes[i] < n; i++)
    {
        if (n % primes[i] == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}