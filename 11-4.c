#include <stdio.h>

int n;

int light(int s[], int l, int r)
{
    if (l==r) return l;
    int mid = l+r>>1;
    int sl = s[mid] - s[l-1];
    int sr = s[r] - s[mid];
    if (sl < sr) return light(s, l, mid);
    else return light(s, mid+1, r);
}

int main()
{
    scanf("%d", &n);
    int m = 1<<n;
    int x, s[m+1];
    s[0] = 0;
    for (int i = 1; i <= m; i ++)
    {
        scanf("%d", &x);
        s[i] = s[i-1] + x;
    }
    printf("%d", light(s, 1, m)-1);
    return 0;
}