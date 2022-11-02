#include <stdio.h>

int main()
{
    char ans;
    printf("输入单个字符:");
    scanf("%s", &ans);
    switch (ans)
    {
    case 'a':
        printf("A");
        break;
    case 'e':
        printf("E");
        break;
    case 'i':
        printf("I");
        break;
    case 'o':
        printf("O");
        break;
    case 'u':
        printf("U");
        break;
    default:
        printf("不是元音");
        break;
    }
}