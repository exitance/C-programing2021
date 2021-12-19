#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m, x, y, z;
    m = x = y = n / 2;
    z = n % 2;
    while (x / 2 || y / 4)
    {
        int tmp = x / 2;
        m += tmp;
        y += tmp;
        x %= 2;
        x += tmp;

        tmp = y / 4;
        m += tmp;
        x += tmp;
        y %= 4;
        y += tmp;        
    }

    printf("%d %d %d %d", m, x, y, z);

    return 0;
}