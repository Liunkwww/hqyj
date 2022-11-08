// 从终端中输入一串字符以'\n'结尾，计算小写字符的个数，分别有多少个。
// 例如 aaAcF123---->结果 a有2个 c有1个
#include<stdio.h>

int main()
{
    char str[128];
    int code[26] = { 0 };
    printf("请输入一串字符：");
    gets(str);
    int i, sum = 0;
    for (i = 0;i < strlen(str);i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            code[(int)str[i] - 97] += 1;
            sum++;
        }
    }
    printf("小写字母共有%d个\n", sum);
    char msg;
    for (i = 0;i < 26;i++)
    {
        if (code[i] != 0)
        {
            char c = i + 97;
            printf("%c有%d个\n", c, code[i]);
        }
    }
    return 0;
}