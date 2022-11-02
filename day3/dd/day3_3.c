//4.题目:在10万以内的一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少?

#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0;
    while (num < 100000)
    {
        if (pow((int)sqrt(num + 100), 2) == num + 100 && pow((int)sqrt(num + 168), 2) == num + 168)
        {
            printf("%d是此数\n", num);
        }
        num++;
    }
    return 0;
}