//4.��Ŀ:��10�����ڵ�һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ���?

#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0;
    while (num < 100000)
    {
        if (pow((int)sqrt(num + 100), 2) == num + 100 && pow((int)sqrt(num + 168), 2) == num + 168)
        {
            printf("%d�Ǵ���\n", num);
        }
        num++;
    }
    return 0;
}