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
int a[100001];
void solve(){
	int M,m1,m2;
    ull sum = 0,sum1 = 0,sum2 = 0;
    int n,x;cin>>n>>x;
    for(int i=0; i<n; i++){
    	cin>>a[i];
        sum += a[i];
    }
    if(sum % x != 0){
        cout<<n<<'\n';
    }
    else{
        m1 = m2 = n;
        sum1 = sum2 = sum;
        for(int i=n-1; i>=0; i--){
            if((sum1 - a[i])% x != 0 ){
                m1--;
                sum1 -= a[i];
                break;
            }
            else{
                sum1 -= a[i];
                m1--;
            }
        }
        for(int i=0; i<n; i++){
            if((sum2 - a[i]) % x != 0){
                m2--;
                sum2 -= a[i];
                break;
            }
            else{
                sum2 -= a[i];
                m2--;
            }
        }
        M = max(m1,m2);
		sum = max(sum1,sum2);
		if(sum % x != 0){
			cout<<M<<'\n';
		}
		else{
			cout<<-1<<'\n';
		}
	}
}

int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	/*
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		solve();
	}
}








