#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define INF 1e18

vector<ll> primes;

void criba()
{
    ll sn = sqrt(1e5) + 10;
    vector<bool> is_prime(sn, true);
    primes.push_back(2);
    for (ll i = 3; i < sn; i += 2)
    {
        if (!is_prime[i])
            continue;
        primes.push_back(i);
        for (ll j = i * i; j < sn; j += i)
            is_prime[j] = false;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q, cnt;
    criba();
    ll n, sum;
    cin >> q;
    while (q--)
    {
        cin >> n;
        cnt = 0;
        sum = 1;
        while (sum <= n / primes[cnt])
        {
            sum *= primes[cnt];
            cnt++;
        }
        cout << cnt - 1 << endl;
    }
}
