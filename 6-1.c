#include <stdio.h>
#include <string.h>
#define BUFSZ 15

int a, b, k, d;
char c[BUFSZ], ans[BUFSZ];

void str_to_decimal()
{
    int len = strlen(c);
    d = 0;
    for (int i = 0; i < len; i ++)
    {
        d *= a;
        if (c[i] >= 'a' && c[i] <= 'z') 
            d += c[i]-'a' + 10;
        else
            d += c[i]-'0';
    }
}

void decimal_to_ans()
{
    k = 0;
    while (d/b)
    {
        int r = d%b;
        if (r > 9) ans[k ++] = 'a' + r - 10;
        else ans[k ++] = r + '0';
        d /= b;
    }
    if (d > 9) ans[k ++] = 'a' + d - 10;
    else ans[k ++] = d + '0';
}

int main()
{
    scanf("%d %d %s", &a, &b, c);
    str_to_decimal();
    decimal_to_ans();
    int fst = 0;
    for (int i = k-1; i >= 0; i --) 
    {
        if (ans[i] != '0') fst = 1;
        if (fst) printf("%c", ans[i]);
    }
    return 0;
}