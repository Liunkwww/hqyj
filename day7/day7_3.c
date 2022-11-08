// 终端输入数组，实现冒泡排序和选择排序的代码。

#include<stdio.h>

int main(int argc, const char* argv[])
{

    int m[64] = { 0 };
    int n[64] = { 0 };
    int i = 0, j = 0, s = 0, t, s1, min;
    printf("输入数组(以空格结尾):");
    while (1)
    {
        scanf("%d", &m[i]);
        n[i] = m[i];
        i++;
        s++;
        if (getchar() == '\n')
        {
            break;
        }
    }
    //冒排
    for (i = 0;i < s - 1;i++)
    {
        for (j = 0;j < s - 1 - i;j++)
        {
            if (m[j] > m[j + 1])
            {
                t = m[j];
                m[j] = m[j + 1];
                m[j + 1] = t;
            }
        }
    }
    printf("冒排排序后的数组为:");
    for (i = 0;i < s;i++)
    {
        printf("%d ", m[i]);
    }
    printf("\n");

    //选排
    for (i = 1;i < s;i++) {
        min = i - 1;
        for (j = i;j < s;j++) {
            if (n[min] > n[j]) {
                min = j;
            }
        }
        t = n[i - 1];
        n[i - 1] = n[min];
        n[min] = t;
    }

    printf("选排排序后的数组为：");

    for (i = 0;i < s;i++) {
        printf("%d ", n[i]);
    }

    return 0;
}