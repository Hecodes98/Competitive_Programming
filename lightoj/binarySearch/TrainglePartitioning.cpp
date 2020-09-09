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

double triangleRatio(double ad, double ab, double ac, double bc){
	double ae = (ad*ac)/ab;
	double de = (bc*ad)/ab;
	double s1 = (ab+bc+ac)/2.0;
	double s2 = (ad+de+ae)/2.0;
	s1 = sqrt(s1*(s1-ab)*(s1-bc)*(s1-ac));
	s2 = sqrt(s2*(s2-ad)*(s2-de)*(s2-ae));
	double ta = s1-s2;
	double ans = s2/ta;
	return ans;
}

void solve(){
	double ab, ac, bc, ratio;cin>>ab>>ac>>bc>>ratio;
	double l,r;
	double ad;
	l = 0;r=ab;
	for(int i = 0 ; i < 100 ; ++i){
		double mid = (l+r)/2.0;
		ad = mid;
		if(triangleRatio(ad,ab,ac,bc) > ratio)
			r = mid;
		else
			l = mid;

	}
	cout <<fixed<<setprecision(10) <<ad<< '\n';
}
int main(){   
    ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	for(int i = 1 ; i <= t ; ++i){
		cout << "Case " << i << ": ";
		solve();
	}
}

