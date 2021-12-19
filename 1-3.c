#include <stdio.h>
#include <math.h>

float pi = 3.1415926;

int main()
{
    float y1 = sqrt( (1.0 - cos(pi / 3.0)) / 2.0);
    float x = pi / 4.0;
    float y2 = pow(sin(x), 2) + sin(x) * cos(x) - pow(cos(x), 2);

    printf("%lf\n%lf", y1, y2);
    return 0;
}