#include <stdio.h>

int main()
{
    float x;
    double y;
    scanf("%f%lf", &x, &y);
    printf("%lf %e\n%lf %e", x, x, y, y);
    return 0;
}