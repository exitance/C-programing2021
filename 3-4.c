#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 1.0;
    int n;
    scanf("%d", &n);
    double term = 1.0;
    double eps = 1/pow(10, n);
    for (int i = 1; ; i ++)
    {
        int t = i * 2 + 1;
        term = 1.0 / t;
        if (term <= eps) 
            break;
        if (i&1) pi -= term;
        else pi += term;
    }
    pi *= 4.0;

    printf("%lf", pi);

    return 0;
}