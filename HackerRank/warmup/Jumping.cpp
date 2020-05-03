#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

int solve(int* b, int n){
    int ans=0;
    for(int i = 0 ; i < n-1; i+=2){
        if(b[i]!=0) i--;
        ans++;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a;cin >> n;
    int b[n+1];
    for(int i = 0 ; i < n ; ++i){
        cin >> a;
        b[i]=a;
    }
    b[n+1]=0;
    cout << solve(b,n) << '\n';
}
