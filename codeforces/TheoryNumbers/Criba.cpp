#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}

void solve(){
    long sn = 1e8, n = 0;
    vector<bool> is_prime(sn, true);
    cout << "2" << '\n';
    for (long i = 3; i < sn; i += 2){
        if (!is_prime[i]) continue;
        n++;
        if(n % 100 == 0) cout << i << '\n';
        for (long j = i * i; j < sn; j += i) is_prime[j] = false;
    }
}

int main(){
    ios::sync_with_stdio(0);cout.tie(0);
    solve();
}