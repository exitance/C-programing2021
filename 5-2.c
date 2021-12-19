#include <stdio.h>
#include <string.h>
#define BUFSZ 256

char str[BUFSZ];
int len;

int judge()
{
    if (str[len-1] == 'y') return 0;
    if (str[len-1] == 's' || str[len-1] == 'x') return 1;
    if (len > 1 && str[len-1] == 'h' && (str[len-2] == 'c' || str[len-2] == 's')) return 1;
    if (str[len-1] == 'o') return 1;
    return 2;
}

int main()
{
    scanf("%s", str);
    len = strlen(str);
    int c = judge();
    if (c == 0)
    {
        str[len-1] = 'i';
        str[len] = 'e'; str[len+1] = 's'; str[len+2] = '\0';
    }
    else if (c == 1)
    {
        str[len] = 'e'; str[len+1] = 's'; str[len+2] = '\0';
    }
    else if (c == 2)
    {
        str[len] = 's'; str[len+1] = '\0';
    }
    printf("%s", str);
    return 0;
}