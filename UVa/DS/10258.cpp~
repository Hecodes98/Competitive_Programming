#include <bits/stdc++.h>
#include <string.h>
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

typedef struct{
	int team, qp, tims;
} T;

bool cmp(T a, T b){
	if(a.qp != b.qp)return a.qp > b.qp;
	else return a.tims < b.tims;
}

void solve(){
	T a[110];
	int t,p,tms;
	char st;
	char line[50];
	for(int i = 0 ; i < 110 ; ++i){
		a[i].qp=0;
		a[i].team = i;
		a[i].tims=0;
	}
	while(cin >> t >> p >> tms >> st && t && p && tms && st){
		if(st == 'I'){
			a[t].tims+=20;
		}else if(st == 'C'){
			a[t].tims+=tms;
			a[t].qp++;
		}		
	}	
	sort(a, a+105, cmp);
	for(int i = 0 ; i <= 100 ; ++i){
		if(a[i].tims!=0){
			cout << a[i].team << " " << a[i].qp << " " << a[i].tims << '\n';
		}
	}
	cout << '\n';
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}






