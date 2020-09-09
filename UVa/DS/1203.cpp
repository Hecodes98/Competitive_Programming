#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define REPL(i,a,b) for(int i=a;i<b;++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
#define DEBUG(x) cerr << #x << " = " << (x) << endl;
#define f first 
#define s second 
#define ALL(v) v.begin(), v.end()
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi; 

const int MOD=1e9+7;
const int inf=1<<30;
const ll INF=1e18;

const int d4x[4]={-1,0,1,0}, d4y[4]={0,1,0,-1};
const int d8x[8]={-1,-1,0,1,1,1,0,-1}, d8y[8]={0,1,1,1,0,-1,-1,-1};

int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}

void solve(){
	string s;
	int Qnm, Prd;
	map<int, int>m;
	while(cin >> s && s[0] !='#'){
		cin>>Qnm>>Prd;
		m[Qnm]=Prd;
	}
	int n;cin>>n;
	priority_queue<pi, vector<pi>, greater<pi>>pq;
	for(int j = 1 ; j <= n ; ++j){
		for(auto i : m){
			int nm = i.s*j;
			pq.push({nm, i.f});
		}
	}
	int idx = 0;
	while(idx!=n){
		cout << pq.top().s << '\n';
		pq.pop();
		idx++;
	}
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	#ifndef ONLINE_JUDGE
		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
	int t=1;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}



