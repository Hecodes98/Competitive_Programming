#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
void solve(){
	int n;cin>>n;
	string s;
	vector<pair<int,int>>pck(n);
	for(int i = 0 ; i < n ; ++i){
	   int x,y;cin >> x >> y;
	   pck[i] = make_pair(x,y);
	}
	sort(pck.begin(), pck.end());
	bool c=1;
	for(int i = 0 ; i < n-1 ; ++i){
		c&=pck[i].first <= pck[i+1].first && pck[i].second <= pck[i+1].second; 
	}
	if(!c){
		cout << "NO\n";
		return;
	}	
	cout << "YES\n";
	int posx=0, posy=0;
	for(int i = 0 ; i < n ; ++i){
		while(posx < pck[i].first){
			cout << "R";
			++posx;
		}
		while(posy < pck[i].second){
			cout << "U";
			++posy;
		}
	}
	cout << "\n";
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}       
}