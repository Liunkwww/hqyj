#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Max( ElementType S[], int N )
{
    int i;
    ElementType j;
    if(N<=1)
    {
        return S[0];
    }
    for(i=0;i<N-1;i++)
    {
        if(S[i+1]>S[i])
        {
            j = S[i+1];
        }
        else
        {
            j = S[i];
        }
    }
    return j;
}


int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}