#include <stdio.h>

int main()
{
    short x1;
    int x2;
    long x3;
    long long x4;
    unsigned int x5;
    scanf("%d%d%ld%lld%u", &x1, &x2, &x3, &x4, &x5);
    printf("%d\n%u\n%o\n%X\n%X", x1, x2, x3, x4, x5);
    
    return 0;
}