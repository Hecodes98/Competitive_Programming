#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int INF = 1e9;
const double eps = 1e-9;
const int MXN = 12;
int n;
int p1[MXN][2], p2[MXN][2];
int dp[1 << MXN][MXN];

bool cross(int dx1, int dy1, int dx2, int dy2, int dx3, int dy3) {
    int c = (dx2 - dx1) * (dy3 - dy1) - (dy2 - dy1) * (dx3 - dx1);
    if(abs(c) > 0) return 0;
    if(min(dx1, dx2) <= dx3 && dx3 <= max(dx1, dx2) && 
        min(dy1, dy2) <= dy3 && dy3 <= max(dy1, dy2)) return 1;
    return 0; 
}

bool check(int i, int j, int k) {
    return cross(p1[i][0], p1[i][1], p1[j][0], p1[j][1], p2[k][0], p2[k][1]);
}

bool check2(int i, int j, int k) {
    return cross(p1[i][0], p1[i][1], p1[j][0], p1[j][1], p1[k][0], p1[k][1]);
}

int g[MXN][MXN];

void floyd() {
    for(int k = 0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++) 
            g[i][j] = INF;
    for(int i = 0; i < n; i++) {
        cin >> p1[i][0] >> p1[i][1];
    }
    for(int i = 0; i < n; i++) {
        cin >> p2[i][0] >> p2[i][1];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
			if(i==j){g[i][j]=0;continue;}
            bool ok = 1;
            for(int k = 0; k < n; k++) {
                ok &= !check(i, j, k);
				if(k!=i && k != j){
					ok&=!check2(i,j,k);
				}
            }
            if(ok) {
                g[i][j] = 1;
            }
        }
    }
    floyd();
    cout << (g[0][n - 1] < INF ? g[0][n - 1] : -1) << endl;
    // memset(dp, -1, sizeof dp);
    // int ans = Dp(1, 1); 
    // cout << (ans < INF ? ans : -1) << endl;
    return 0;
}
