#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define un unsigned
#define vi vector<int>
#define pb push_back
 
using namespace std;
//******************************************************************************
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(NULL);
 
  #ifndef ONLINE_JUDGE
  //freopen("input.txt", "r", stdin); //Read external file
  //freopen("output.txt", "w", stdout); //Write to external file
  #endif
 
  ll t;
  cin>>t;
  while(t--){
    ll x,y,n,mod;
    cin>>x>>y>>n;
    //cerr<<x<<" " << y << " " << n<<"\n";
    mod=n%x;
    if(mod==y){
      cout << n << "\n";
    }else if(mod>y){
      ll rem=mod-y;
      cout << n-rem << "\n";
    }else if(mod<y){
      ll rem=mod+1;
      rem+=(x-1-y);
      cout << n-rem << "\n";
    }
  }
 
 
  return 0;
}
