#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int seed, n;

int main()
{
    scanf("%d %d", &seed, &n);
    srand(seed);
    int m = 0;
    for (int i = 0; i < n; i ++)
    {
        double x = 1.0 + 1.0 * rand() / RAND_MAX;
        double y = 1.0 * rand() / RAND_MAX;
        if (1.0/x >= y) m ++;
    }
    double s = (double)m/n;
    
    printf("%lf", s);
    
    return 0;
}