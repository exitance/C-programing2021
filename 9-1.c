#include <stdio.h>
#define N 1010

int n, a[N];

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i ++)
    {
        int flag = 0;
        for (int j = n-1; j > i; j --)
        {
            if (a[j] < a[j-1])
            {
                flag = 1;
                swap(&a[j], &a[j-1]);
            }
        }
        if (!flag) break;
    }
    
    for (int i = 0; i < n; i ++) printf("%d ", a[i]);
    
    return 0;
}