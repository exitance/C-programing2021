#include <stdio.h>
#define N 1010

int n, f[N];

int fibo(int x)
{
    if (x == 1) return f[x] = 0;
    if (x == 2) return f[x] = 1;
    if (f[x]) return f[x];
    return f[x] = fibo(x-1) + fibo(x-2);
}

int main()
{
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}