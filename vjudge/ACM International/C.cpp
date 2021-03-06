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
	string s1, s2;
	cin>>s1>>s2;
    int n=s1.size();
	int i,j,num=0;
    for(i=0,j=n-1;i<n;i++,j--){
        if(s1[i]!=s2[i]&&s1[i]!=s2[j])
            break;
    }
    if(i!=n)
        printf("-1\n");
    else
    {
        num=0;
        for(i=0,j=n-1;i<n/2;i++,j--)
        {
            if(num%2==0)
            {
                if(s1[i]!=s2[i])
                    num++;
            }
            else
            {
                if(s1[i]!=s2[j])
                {
                    num++;
                }
            }
        }
        printf("%d\n",num);
    }
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		solve();
	}
}  

