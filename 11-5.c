#include <stdio.h>

int n;

int light(int s[], int l, int r)
{
    if (l==r) return l;
    int mid = l+r>>1;
    double sl = (double)(s[mid] - s[l-1]) / (mid-l+1);
    double sr = (double)(s[r] - s[mid]) / (r-mid);
    if (sl < sr) return light(s, l, mid);
    else return light(s, mid+1, r);
}

int main()
{
    scanf("%d", &n);
    int x, s[n+1];
    s[0] = 0;
    for (int i = 1; i <= n; i ++)
    {
        scanf("%d", &x);
        s[i] = s[i-1] + x;
    }
    printf("%d", light(s, 1, n)-1);
    return 0;
}