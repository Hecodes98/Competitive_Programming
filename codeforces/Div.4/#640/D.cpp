#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}
void solve(){
    int n; cin >> n;
	int a[n];
	for(int i = 0;i < n ; ++i)cin >> a[i];
	int sl=0, sr=0, le=0;
	int trn=0;
	for(int l=0, r=n-1 ; l<=r;){
		if(trn&1^1){
	    	int cs=0;
			while(l<=r&&cs<=le)cs+=a[l++];
			sl+=cs;
			le=cs;
		}else{
			int cs=0;
			while(r>=l&&cs<=le)cs+=a[r--];
			sr+=cs;
			le=cs;
		}
		++trn;
	}  
	cout << trn << " " << sl << " " << sr << '\n';      
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--)
		solve();
}