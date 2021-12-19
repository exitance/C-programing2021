#include <stdio.h>
#define N 1010
int f[N];

int main()
{
    int n;
    scanf("%d", &n);
    f[0] = 1, f[1] = 1, f[2] = 2;
    for (int i = 3; i <= n; i ++) f[i] = f[i-1] + f[i-2] + f[i-3];
    printf("%d", f[n]);
    return 0;
}