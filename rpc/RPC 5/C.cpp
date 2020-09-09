#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i,b) for(int i=0;i<b;++i)
#define reple(i,b) for(int i=0;i<=b;++i)
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

int zx,zy,sx,sy,d,r;

int incircle(int x, int y){
	if(((x-sx)*(x-sx)+(y-sy)*(y-sy))<(r*r))return 1;
	else return 0;
}

int insquare(int x, int y){
	if((x>zx)&&(x<zx+d) && (y>zy)&&(y<zy+d))return 1;
	else return 0;
}

int oncircle(int x, int y){
	if(((x-sx)*(x-sx)+(y-sy)*(y-sy))==(r*r))return 1;
	else return 0;
}

int onsquare(int x, int y){
	if(((x==zx)&&(y>=zy)&&(y<=zy+d)) || ((x==zx+d)&&(y>=zy)&&(y<=zy+d)) || ((y==zy)&&(x>=zx)&&(x<=zx+d))||((y==zy+d)&&(x>=zx)&&(x<=zx+d)))return 1;
	else return 0;
}

int op2(){
	if(incircle(zx,zy) || incircle(zx+d,zy) || incircle(zx,zy+d) || incircle(zx+d,zy+d)){
		return 1;
	}
	if(insquare(sx,sy) || insquare(sx+r,sy) || insquare(sx-r,sy) || insquare(sx,sy+r) || insquare(sx,sy-r)){
		return 1;
	}else return 0;
}

int tch1(){
	if(oncircle(zx,zy)||oncircle(zx+d,zy)||oncircle(zx,zy+d)||oncircle(zx+d,zy+d))return 1;
	if(onsquare(sx+r,sy)||onsquare(sx-r,sy)||onsquare(sx,sy+r)||onsquare(sx,sy-r))return 1;
	else return 0;
}

void solve(){
	cin>>sx>>sy>>r;	
	cin>>zx>>zy>>d;
	if(op2()){
		cout << "2\n";		
	}else if(tch1()){
		cout << "1\n";
	}else cout << "0\n";

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






