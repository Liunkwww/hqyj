#include <stdio.h>

int main() {
    int i, j;
    char an[5];
    printf("������λ��:");
    scanf("%s", &an);
    for (i = 0;i < 2;i++) {
        if (an[i] == an[4 - i])
        {
            j = 1;
        }
        else
        {
            j = 0;
            break;
        }
    }
    if (j)
    {
        printf("�ǻ�����");
    }
    else {
        printf("���ǻ�����");
    }
}