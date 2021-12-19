#include <cstdio>
#include <algorithm>
#define N 1010

struct good
{
    int No;
    float weight;
    float value;
    float pw;
    bool operator<(const good &b)
    {
        return pw!=b.pw?pw>b.pw:value>b.value;
    }
}goods[N];

float tw, tv;

void greedy(int n, int c)
{
    tw = 0.0, tv = 0.0;
    for (int i = 0; i < n; i ++)
    {
        if (tw + goods[i].weight <= c)
        {
            tw += goods[i].weight;
            tv += goods[i].value;
        }
        else break;
    }
}

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    
    for (int i = 0; i < n; i ++)
    {
        scanf("%f %f", &goods[i].weight, &goods[i].value);
        goods[i].pw = goods[i].value/goods[i].weight;
        goods[i].No = i;
    }

    std::sort(goods, goods+n);
    greedy(n, c);
    
    printf("%.0f\n%.0f", tw, tv);

    return 0;
}