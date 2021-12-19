#include <stdio.h>
#include <math.h>

int main()
{
    float y1 = 3.0/4.0 + (103 % 3);
    float y2 = floor(3.8);
    float y3 = floor(-3.8);
    float y4 = ceil(3.2);
    float y5 = ceil(-3.2);

    printf("%lf\n%lf\n%lf\n%lf\n%lf", y1, y2, y3, y4, y5);

    return 0;
}