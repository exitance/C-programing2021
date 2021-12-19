#include <stdio.h>
#define N 10010

int n, m, a[N];

int find(int l, int r)
{
    if (l==r) return -1;
    int mid = l+r >> 1;
    if (a[mid] == m) return mid;
    if (a[mid] < m) return find(mid+1, r);
    if (a[mid] > m) return find(l, mid);
}

int main()
{
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
    printf("%d", find(0, n-1));
    return 0;
}