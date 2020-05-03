#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1e18

int isBadVersion(int n){
    bool c[5] = {false,false,false,true,true}; // array given by leetcode, this was for testing 
    return c[n];
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int l = 0, r = n, ans;
    while(l<=r){
        int m = l+(r-l)/2;
        if(isBadVersion(m)){
            ans=m;
            r=m-1;
        }else{
            l = m+1;
        }
    }
    cout << ans << '\n';
}
