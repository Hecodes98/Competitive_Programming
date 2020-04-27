#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

int solve(int n){
    
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<int,int>sock;
    int n; cin >> n;
    int ar,res=0;
    while(n--){
        cin >> ar;
        sock[ar]++;
        if(sock[ar] % 2 == 0) res++;
    }
    cout << res << '\n';
}
