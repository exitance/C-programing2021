#include <stdio.h>

int main()
{
    float y = 1.0 + (1.0 / (1.0 + 1.0 / (1.0 + 1.0 / 5.0)));

    printf("%f", y);

    return 0;
}