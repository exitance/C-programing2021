#include <stdio.h>
#define N 1010

int n, a[N];

int max(int l, int r)
{
    if (l == r) return a[l];
    int mid = l+r>>1;
    int al = max(l, mid);
    int ar = max(mid+1, r);
    if (al > ar) return al;
    else return ar;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
    printf("%d", max(0, n-1));
    return 0;
}