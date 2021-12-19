#include <stdio.h>
#define BUFSZ 256

int n;
char str[BUFSZ];

int main()
{
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i ++)
    {
        scanf("%[^\n]", str);
        printf("%s\n", str);
        getchar();
    }
    return 0;
}