#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}

vector<int> cribaPrimes(){
    long sn = 1e7 + 10;
    vector<int> is_prime(sn, 2);
    for (long i = 3; i < sn; i += 2){
        if (is_prime[i] != 2) continue;
        is_prime[i] = i;
        for (long j = i * i; j < sn; j += i){
            if(j % is_prime[j] == 0){
                continue;
            }
            is_prime[j] = i;  
        } 
    }
    return is_prime;
}

void solve(int n){}

int main(){
    ios::sync_with_stdio(0);cout.tie(0);
    int t, n;
    vector<int>fp = cribaPrimes();
    int sz = 1e7;
    vector<ll>vans(sz);
    vans[0]=0;vans[1]=0;
    for(int i = 2 ; i < sz ; ++i){
        vans[i] = vans[i-1] + fp[i];
    }
    cin >> t;
    while(t--){
        cin >> n;
        cout << vans[n] << '\n';
    }
    
}