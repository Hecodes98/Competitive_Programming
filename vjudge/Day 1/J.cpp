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

int a[1010];

const int mod = 7901;

ll gcd(ll a, ll b){return a==0 ? b : gcd(b%a, a);}

	void solve(){
	int l,i,n,j;
    while(scanf("%d",&n)!=EOF){
        getchar();
        for(i=1; i<=n; i++){
            string str;
            stack<char>s;
            getline(cin,str);
            int flag=0;
            for(j=0; j<str.size(); j++){
                if(str[j]=='('||str[j]=='['){
                    s.push(str[j]);
                }
                else if(((!s.empty())&&(s.top()=='('))&&(str[j]==')'))
                {
                    s.pop();
                }
                else if(((!s.empty())&&(s.top()=='['))&&(str[j]==']'))
                {
                    s.pop();
                }
                else
                {
                    flag=1;
                }
            }
            if(flag==1||s.size()>=1)
                printf("No\n");
            else
                printf("Yes\n");

        }
    }
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}  




