#include <stdio.h>

int main()
{
    int i, j, k, l;
    printf("层数:");
    scanf("%d", &l);
    for (i = 0;i < l;i++)
    {
        for (j = 0;j < l - i;j++)
        {
            printf(" ");
        }
        for (k = 0;k < i * 2 + 1;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}