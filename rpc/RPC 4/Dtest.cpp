#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<queue>
#define ll long long
#define inf 0x3f3f3f3f
#define sd(a) scanf("%d",&a)
#define sdd(a,b) scanf("%d%d",&a,&b)
#define cl(a,b) memset(a,b,sizeof(a))
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define sddd(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define dbg() printf("aaa\n")
using namespace std;
int main() {
	int T;
    sd(T);
    while(T--){
        int w,r1,r2,r3;
        sd(w);sddd(r1,r2,r3);
        int n;sd(n);
        int ans=0;
        while(n--){
            double x,y;
            scanf("%lf%lf",&x,&y);
            double d=x*x+y*y;
			cout << d << " dist " <<'\n';
            if(d<(double)r1*(double)r1){
                ans+=50;
            }else if(d>(double)r3*(double)r3){
                ans+=0;
            }else {
                //???
                int pos;//??
                if(x>0&&y>0) pos=1;
                else if(x<0&&y>0) pos=2;
                else if(x<0&&y<0) pos=3;
                else pos=4;
                double t=(atan(y/x)*180.0)/3.1415926;//??
                if(pos==2||pos==3) t+=180.0;
                else if(pos==4) t+=360.0;
                double ba=360.0/(double)w;//?????
                int k=(int)(t/ba)+1;//?????
                if(d>(double)r1*(double)r1&&d<(double)r2*(double)r2){
                    ans+=k*2;
                }else if(d>(double)r2*(double)r2&&d<(double)r3*(double)r3){
                    ans+=k;
                }
            }
        }
        printf("%d\n",ans);
    }
	return 0;
}
