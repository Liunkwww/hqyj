#include <stdio.h>
int main(int argc, const char* argv[])
{
    int num = 0;
    char a1[32];
    printf("输入三位数的整数:");
lable:
    scanf("%d", &num);
    if (num > 99 && num <= 999)
    {
        printf("百位:%d 十位:%d 个位:%d \n", num / 100, (num % 100) / 10, num % 10);
        printf("和为:%d", ((num / 100) + ((num % 100) / 10) + (num % 10)));
    }
    else
    {
        printf("输入不符合标准,请重新输入:");
        gets(a1);
        goto lable;
    }
    return 0;
}
