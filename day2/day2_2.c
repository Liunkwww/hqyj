#include <stdio.h>

int main() {
    int i = 0;
    int yy = 0, mm = 0, dd = 0;
    int allday = 0, flag = 0;
    printf("����������:");
    scanf("%d %d %d", &yy, &mm, &dd);

    if (yy > 0 && yy <= 9999 && mm > 0 && mm <= 12 && dd > 0 && dd <= 31)
    {
        if ((yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0))
        {
            flag = 1;
            if (mm <= 2) {
                allday = 31 + dd;
            }
            else
            {
                for (i = 1;i <= mm;i++) {
                    if (i == 4 || i == 6 || i == 9 || i == 11)
                    {
                        allday += 30;
                    }
                    else if (i == 2)
                    {
                        allday += 29;
                    }
                    else if (i == mm)
                    {
                        allday += dd;
                    }
                    else
                    {
                        allday += 31;
                    }
                }
            }
        }
        else
        {
            for (i = 1;i <= mm;i++) {
                if (i == 4 || i == 6 || i == 9 || i == 11)
                {
                    allday += 30;
                }
                else if (i == 2)
                {
                    allday += 28;
                }
                else if (i == mm)
                {
                    allday += dd;
                }
                else
                {
                    allday += 31;
                }
            }
        }
    }
    if (flag) {
        printf("%d�����꣬%d��%d����%d��ĵ�%d��", yy, mm, dd, yy, allday);
    }
    else
    {
        printf("%d�������꣬%d��%d����%d��ĵ�%d��", yy, mm, dd, yy, allday);
    }
}