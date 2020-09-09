#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
#define REPL(i,a,b) for(int i=a;i<a;++i)
#define REPLE(i,a,b) for(int i=a;i<=a;++i)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;                        
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
const int maxy = 100000;
int pylons[maxy+1][2];
int main() {
    int n;cin >> n;
    for(int c1 = 0; c1 < n; c1++){
        int x,y,w;
        cin >> x >> y >> w;
        pylons[y][w-1]++;
    }
    int ans = 0;
    int out = 0;
    for(int c1 = 0; c1 <= maxy; ++c1){
        ans += min(out, pylons[c1][1]);
        out -= pylons[c1][1];
        if(out < 0)out = 0;
        ans += min(out, pylons[c1][0]);
        pylons[c1][0] -= out;
        if(pylons[c1][0] < 0)pylons[c1][0] = 0;
        out = pylons[c1][1] + pylons[c1][0];
    }
    cout << ans << "\n";
    return 0;
}




