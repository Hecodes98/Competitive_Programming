#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1e18

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string J, S;
    cin >> J;
    cin >> S;
    int ans=0;
    for(char& i : S){
        for(char& c : J){
            if(c == i)ans++;
        }
    }
    cout << ans << '\n';
}
