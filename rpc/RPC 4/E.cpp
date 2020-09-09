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

map<char, vector<string>> init;

void solve(){
	string str;getline(cin,str);
	stringstream ss;
	ss << str;
	vector<string> teama;
	vector<string>teamb;
	int tims=0;
	while(ss >> str)tims++;
	int n;cin>>n;
	string s[n];
	bool itr[n] = {0};
	for(int i = 0 ; i < n ; ++i){
		cin>>s[i];
	}
	int ne=n;
	int idx = 0,cnt=0;
	bool turn = 0;
	while(ne > 0){
		if(!itr[idx])cnt++;
		if(cnt == tims){
			itr[idx]=1;
			cnt=0;
			if(!turn){
				turn=1;
				teama.push_back(s[idx]);
			}else{
				turn=0;
				teamb.push_back(s[idx]);
			}
			ne--;
		}
		idx = (idx+1)%n;
	}
	cout << teama.size() << '\n';
	for(auto c : teama)cout << c << '\n';
	cout << teamb.size() << '\n';
	for(auto c : teamb)cout << c << '\n';

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




