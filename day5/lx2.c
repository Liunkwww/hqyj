#include <stdio.h>

int main()
{
    int i;
    int num[5] = {1,2,3,4,5};
    printf("数组内容:");
    for(i=0;i<5;i++)
    {
        printf("%d",num[i]);
    }
    printf("\n");
    int brr[5] = {1,2,3};
    for(i=0;i<5;i++)
    {
        printf("%d",brr[i]);
    }
    printf("\n");
}