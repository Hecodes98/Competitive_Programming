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
    int a, greather=-1e8;
    int arr[6][6];
    for (size_t i = 0; i < 6; ++i){
        for (size_t j = 0; j < 6; ++j){
            cin >> a;
            arr[i][j] = a;
        }
    }
    for (size_t i = 0; i <= 3; ++i){
        for (size_t j = 0; j <= 3; ++j){
            int tmp = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j+2] + arr[i+2][j+1] + arr[i+2][j];
            greather = max(tmp, greather);
        }
    }
    cout << greather << '\n';

}
