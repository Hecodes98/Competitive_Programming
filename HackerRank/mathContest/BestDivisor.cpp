#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

int solve(int n){
    int sum = 0;
    while(n>=1){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int sum, ans, mxi=0;
    for (int i = 1; i <= n; ++i){
        if(n%i==0){
            sum=solve(i);
            if(mxi < sum){
                mxi=sum;ans=i;
            }
            if(mxi == sum) ans=min(ans,i);
        }
    }
    cout << ans << '\n';
    
}
