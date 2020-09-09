#include <cstdio>
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>
#include <string.h>
#define M(a, b) memset(a, b, sizeof(a))
#define INF 0x3f3f3f3f
using namespace std;
int n, m; ],b[];
int main()
{    )
    {
        ;
        i < n;i++)            scanf("%d",&a[i]);
        ;
        i < m;i++)            scanf("%d",&b[i]);
        sort(a, a + n);
        sort(b, b + m);
        ;
        ;        ]<b[m-])
        {
            ;
            i < n;i++)               sum+=a[i];
            ;
            i < m - ;i++)
            {
                if (sum > b[i])
                    ans += b[i];
                else
                    ans += sum;
            }
            ans += sum;
        }
        else
        {
            ;
            i < m;i++)                 sum+=b[i];
            ;
            i < n - ;i++)
            {
                if (sum > a[i])
                    ans += a[i];
                else
                    ans += sum;
            }
            ans += sum;
        }
        printf("%I64d\n", ans);
    };
}