#include <stdio.h>

int main()
{
    int i;
    int crr[] = { 112312312,2,3 };
    int sz = sizeof(crr) / sizeof(crr[0]);
    // for (i = 0;i < sz;i++)
    // {
    //     printf("%d ", crr[i]);
    // }
    // printf("\n");
    for (i = 0;i < sz;i++){
        printf("�����%d����:",i+1);
        scanf("%d",&crr[i]);
    }
    for (i = 0;i < sz;i++){
        printf("%d ",&crr[i]);
    }
}