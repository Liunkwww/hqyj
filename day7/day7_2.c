// 终端输入一个位置，要求从指定位置插入
// 例子：n=0-->abc12345 n=1--> 1abc2345 n=3-->123abc45
// 1）用辅助数组
// 2）只用一个数组实现

#include <stdio.h>
int main()
{
    char dest[30] = "01234";
    char aid[32] = "abcde";
    int n, i = 0;
    printf("目标位置在第几位:");
    scanf("%d", &n);
    while (aid[i]) {
        dest[n + strlen(aid)] = dest[n];
        dest[n++] = aid[i++];
    }
    printf("新字符串是：%s\n", dest);
    return 0;
}