#include <stdio.h>

int c, n, ansb, cnt;
double maxv, maxw, curv, curw;

int main()
{
    scanf("%d %d", &c, &n);
    double w[n], v[n];
    int ans[n];
    for (int i = 0; i < n; i ++) scanf("%lf", &w[i]);
    for (int i = 0; i < n; i ++) scanf("%lf", &v[i]);
    int p = 2 << n;
    for (int b = 0; b < p; b ++)
    {
        int tmpb = b;
        curv = 0.0;
        curw = 0.0;
        int flag = 1;
        
        for (int i = 0; i < n; i ++, tmpb >>= 1)
        {
            if (tmpb & 1) 
            {
                curw += w[i];
                if (curw > c) {
                    flag = 0;
                    break;
                }
                curv += v[i];
            }
        }
        
        if (flag)
        {
            if (curv > maxv)
            {
                maxv = curv;
                maxw = curw;
                ansb = b;
            }
        }
        
    }
    for (int i = 0; i < n; i ++, ansb >>= 1)
        if (ansb & 1)
            ans[cnt ++] = i + 1;
    for (int i = 0; i < cnt; i ++) printf("%d ", ans[i]);
    printf("%.0lf %.0lf", maxw, maxv);
    
    return 0;
}