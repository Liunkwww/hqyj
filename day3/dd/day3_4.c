#include <stdio.h>

int main()
{
    int num = 0;
    int t = 0;
    char flag = '+';
    printf("������һ��32λ�з�������:");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num < 0)
        {
            flag = '-';
            num = -num;
        }
        t = t * 10 + num % 10;
        num = num / 10;
    }
    printf("%c%d\n", flag, t);
    return 0;
}