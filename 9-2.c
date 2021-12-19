#include <stdio.h>
#define N 1010

int n, m, a[N];

int find()
{
    int l = 0, r = n-1;
    while (l < r)
    {
        int mid = (l + r + 1) >> 1;
        if (a[mid] > m) r = mid-1;
        else l = mid;
    }
    return l;
}

int main()
{
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
    int k = find();
    if (m == a[k]) printf("%d", k);
    else printf("-1");
    return 0;
}