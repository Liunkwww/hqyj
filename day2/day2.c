#include <stdio.h>

int main() {
    int i, j;
    char an[5];
    printf("输入五位数:");
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
        printf("是回文数");
    }
    else {
        printf("不是回文数");
    }
}