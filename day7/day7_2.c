// �ն�����һ��λ�ã�Ҫ���ָ��λ�ò���
// ���ӣ�n=0-->abc12345 n=1--> 1abc2345 n=3-->123abc45
// 1���ø�������
// 2��ֻ��һ������ʵ��

#include <stdio.h>
int main()
{
    char dest[30] = "01234";
    char aid[32] = "abcde";
    int n, i = 0;
    printf("Ŀ��λ���ڵڼ�λ:");
    scanf("%d", &n);
    while (aid[i]) {
        dest[n + strlen(aid)] = dest[n];
        dest[n++] = aid[i++];
    }
    printf("���ַ����ǣ�%s\n", dest);
    return 0;
}