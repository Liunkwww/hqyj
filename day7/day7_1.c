// ���ն�������һ���ַ���'\n'��β������Сд�ַ��ĸ������ֱ��ж��ٸ���
// ���� aaAcF123---->��� a��2�� c��1��
#include<stdio.h>

int main()
{
    char str[128];
    int code[26] = { 0 };
    printf("������һ���ַ���");
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
    printf("Сд��ĸ����%d��\n", sum);
    char msg;
    for (i = 0;i < 26;i++)
    {
        if (code[i] != 0)
        {
            char c = i + 97;
            printf("%c��%d��\n", c, code[i]);
        }
    }
    return 0;
}