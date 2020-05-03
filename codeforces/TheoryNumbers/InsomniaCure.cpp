#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define INF 1e18

int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}

int main(){
    ios::sync_with_stdio(0);cout.tie(0);
    int vc[4];
    int a,d;
    for(short i = 0 ; i < 4 ; ++i){
        cin >> a;
        vc[i] = a;
    }
    cin >> d;
    set<int> kl;
    for(int i = 0 ; i < 4 ; ++i){
        for(int j = vc[i] ; j <= d ; j+=vc[i]){
            if(j == 1){
                cout << d << '\n';
                return 0;
            }
            kl.insert(j);  
        } 
    }
    cout << kl.size() << '\n';
}