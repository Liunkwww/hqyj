#include <stdio.h>

int main() {
    int i = 0, j = 0, k = 0;
    char an[5];
    char as[5];
    printf("输入不大于五位的数字:");
    scanf("%s", &an);
    for (i = 0;i < 5;i++) {
        if (an[i] >= 49 && an[i] <= 57)
        {
            as[j] = an[i];
            j++;
        }
    }
    printf("有%d个,整理后为", j);
    for (k = 0;k < j;k++)
    {
        printf("%d", as[k]-'0');
    }
    printf("\n");
}