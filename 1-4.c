#include <stdio.h>
#include <math.h>

float pi = 3.1415926;

int main()
{
    float y1 = 2.0 * sqrt(5.0) * (sqrt(6.0) + sqrt(3.0)) / (6.0 + 3.0);
    float y2 = (log(5.0 * log(3.0)) - log(2.0))/ (sin(pi / 3.0));
    float y3 = exp(3.0) + log10(105.0);

    printf("%lf\n%lf\n%lf", y1, y2, y3);

    return 0;
}