#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define REPL(i,a,b) for(int i=a;i<b;++i)
#define REPLE(i,a,b) for(int i=a;i<=b;++i)
#define f first 
#define s second 
#define ALL(v) v.begin(), v.end()
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi; 

const int MOD=1e9+7;
const int inf=1<<30;
const ll INF=1e18;

int gcd(int a, int b){return a==0 ? b : gcd(b%a, a);}

int a[10020];

void solve(){
	int k,n;
	while(cin>>k>>n){
		for(int i = 0 ; i <= k ; ++i)a[i]=0;
		for(int i = 0 ; i < n ; ++i){
			int v;cin>>v;
			a[v]++;
		}
		set<int>fr; // 1 1 2 2 2 3 3 3 4 4 4 -> begin -> 2  rbegin-> 3
		vector<pi> t;
		for(int i = 1; i <= k ; ++i){
			fr.insert(a[i]);
			t.emplace_back(a[i], i);
		}
		if(fr.size() > 3)cout << "*\n";
		else{
			sort(ALL(t));
			int min = *fr.begin(), max = *fr.rbegin();
			t[0].f = min+1;
			bool ok=true;
			for(int i = 0 ; i < k-1 ; ++i){
				if(t[i].f != t[i+1].f)ok=false;
			}
			t[0].f-=1;
			if(ok)cout << '+' << t[0].s << '\n';
		   	else{
				ok = true;
				t[t.size()-1].f = max - 1;
				for(int i = 0 ; i < k-1 ; ++i){
					if(t[i].f != t[i+1].f)ok=false;
				}
				t[t.size()-1].f+=1;
				if(ok)cout << '-' << t[t.size()-1].s << '\n';
				else{
					ok = true;
					t[t.size()-1].f = max - 1;
					t[0].f = min + 1;
					for(int i = 0 ; i < k-1 ; ++i){
						if(t[i].f != t[i+1].f)ok=false;
					}
					if(ok)cout << "-" << t[t.size()-1].s << " +" << t[0].s << '\n';
					else cout << "*\n";
				}
			}	
			
		}
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


