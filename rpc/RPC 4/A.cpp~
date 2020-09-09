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
	int n;
    string word;
    cin >> word;
    cin >> n;
    vector<string> words(n);
    int start_with[26] = {0};
    for(int i = 0 ; i < n ; ++i){
        cin >> words[i];
        start_with[words[i][0]-'a']++;
    }
    int last = word[word.length()-1]-'a';
    if(start_with[last] == 0){
        cout << "?\n";
        return;
    }
    string ans = "";
    for(int i = 0 ; i < n ; ++i){
        if(words[i][0]-'a' != last)continue;
        if(ans.length() == 0)ans = words[i];
        int last2 = words[i][words[i].length()-1]-'a';
        if(start_with[last2] == 0 || (start_with[last2] == 1 && last == last2)){
            cout << words[i] << "!\n";
            return;
        }
    }
    cout << ans << "\n";
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



