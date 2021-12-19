#include <stdio.h>
#include <string.h>
#include <math.h>
#define BUFSZ 15

int a, b, integ, ki, kf;
double frac;
char c[BUFSZ], ans_int[BUFSZ], ans_frac[BUFSZ];

void str_to_decimal()
{
    integ = 0;
    frac = 0.0;
    int len = strlen(c);
    int i;
    for (i = 0; i < len && c[i] != '.'; i ++)
    {
        integ *= a;
        if (c[i] >= 'a' && c[i] <= 'z') integ += c[i] - 'a' + 10;
        else integ += c[i] - '0';
    }
    for (int j = len-1; j > i; j --)
    {
        if (c[j] >= 'a' && c[j] <= 'z') frac += c[j] - 'a' + 10;
        else frac += c[j] - '0';
        frac /= a;
    }
}

void decimal_to_ans()
{
    ki = 0;
    while (integ / b)
    {
        int r = integ % b;
        if (r > 9) ans_int[ki ++] = 'a' + r - 10;
        else ans_int[ki ++] = r + '0';
        integ /= b;
    }
    if (integ > 9) ans_int[ki ++] = 'a' + integ - 10;
    else ans_int[ki ++] = integ + '0';
    
    kf = 0;
    while (kf < 10)
    {
        double tmp = frac * b;
        double r = floor(tmp);
        int t = (int)r;
        if (t > 9) ans_frac[kf ++] = 'a' + t - 10;
        else ans_frac[kf ++] = t + '0';
        if (r == tmp) break;
        frac = tmp - r;
    }
}

void print_ans()
{
    
    int fst = 0;
    for (int i = ki-1; i >= 0; i --) 
    {
        if (ans_int[i] != '0') fst = 1;
        if (fst) printf("%c", ans_int[i]);
    }
    if (!fst) printf("0");
    int fxt = -1;
    for (int i = kf-1; i >= 0; i --) 
    {
        if (ans_frac[i] != '0')
        {
            fxt = i;
            break;
        }
    }
    if (fxt >= 0)
    {
        printf(".");
        if (ki + fxt + 1 > 9) fxt = 8 - ki;
        for (int i = 0; i <= fxt; i ++)
        {
            printf("%c", ans_frac[i]);
        }
    }
}

int main()
{
    scanf("%d %d %s", &a, &b, c);
    str_to_decimal();
    decimal_to_ans();
    print_ans();
    return 0;
}