#include <stdio.h>
#define N 1010

int n, sd, a, b, m;
int x[N];

static int cnt = 0;

void random_seed(int seed)
{
    x[0] = seed;
}

int random_int()
{
    cnt ++;
    x[cnt] = (a * x[cnt-1] + b) % m;
    return x[cnt];
}

int main()
{
    scanf("%d %d %d %d %d", &n, &sd, &a, &b, &m);
    random_seed(sd);
    for (int i = 0; i < n; i ++)
    {
        printf("%d ", random_int());
    }
    return 0;
}