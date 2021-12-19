#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int res = 1;    
    while (res)
    {
        if (res % 3 == x && res % 5 == y && res % 7 == z) break;
        else res ++;
    }

    printf("%d", res);

    return 0;
}