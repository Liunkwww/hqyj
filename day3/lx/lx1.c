#include <stdio.h>

int main()
{
    char ans;
    printf("���뵥���ַ�:");
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
        printf("����Ԫ��");
        break;
    }
}