#include <stdio.h>

int main()
{
    int num[6],i;
    for(i=0;i<6;i++)
    {
        printf("%p\n",&num[i]);
    }
    printf("%p\n",num);
}