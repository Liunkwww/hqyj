#include <stdio.h>

int main()
{
    float score;
    printf("ÊäÈë³É¼¨:");
    scanf("%f", &score);
    int ans = (score > 60) + (score > 80) + (score > 90);
    switch (ans)
    {
    case 1:
        printf("C");
        break;
    case 2:
        printf("B");
        break;
    case 3:
        printf("A");
        break;
    default:
        printf("0»è£¡");
        break;
    }
}