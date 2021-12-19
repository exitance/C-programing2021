#include <stdio.h>
#include <math.h>

int A[3][3], B[3][3], C[3][3];

void readin(int a[3][3])
{
    for (int i = 0; i < 3; i ++)
        for (int j = 0; j < 3; j ++)
            scanf("%d", &a[i][j]);
}

void output(int a[3][3])
{
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

void add()
{
    for (int i = 0; i < 3; i ++)
        for (int j = 0; j < 3; j ++)
            C[i][j] = A[i][j] + B[i][j];
}

void sub()
{
    for (int i = 0; i < 3; i ++)
        for (int j = 0; j < 3; j ++)
            C[i][j] = A[i][j] - B[i][j];
}

void mult()
{
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 3; k ++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

void transA()
{
    for (int i = 0; i < 3; i ++)
        for (int j = 0; j < 3; j ++)
            C[i][j] = A[j][i];
}

int main()
{
    readin(A);
    readin(B);
    
    add();
    output(C);
    printf("\n");
    sub();
    output(C);
    printf("\n");
    mult();
    output(C);
    printf("\n");
    transA();
    output(C);
    return 0;
}