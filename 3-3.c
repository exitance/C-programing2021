#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    scanf("%d", &x);
    char str[11];
    for (int i = 1; i <= x; i ++)
    {
        for (int j = 1; j <= i; j ++)
        {
            sprintf(str, "%d*%d=%d", j, i, i*j);
            printf("%-10s\t", str);
        }
        printf("\n");
    }

    return 0;
}