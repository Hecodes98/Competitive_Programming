#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define INF 1e18
#define REPL(i,a,b) for(int i=a;i<a;++i)
#define REPLE(i,a,b) for(int i=a;i<=a;++i)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;

#define M_PI 3.14159265358979323846

const int mod = 7901;
ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}
int a[100020];
priority_queue <char, vector<char>, less<char>> pq1;
priority_queue <char, vector<char>, greater<char>> pq2;
void solve(){
	string s;cin>>s;
	for(int i = 0 ; i < (int)s.size() ; ++i){
		pq2.push(s[i]);
	}
	while(!pq2.empty()){
		char t = pq2.top();
	   	pq2.pop();
		if(!pq2.empty() && t != 'z'){
			if(t == pq2.top()){
				pq2.pop();
				pq2.push(t+1);
			}else{
				pq1.push(t);
			}
		}else{
			pq1.push(t);
		}	
	}
	while(!pq1.empty()){
		char h = pq1.top();
		pq1.pop();
		cout << h;
	}
	cout << '\n';
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  







