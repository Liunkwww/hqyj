// ����һ��int���͵Ķ�ά���飬����ֻ�ܴ洢����������ڶ���ֵ��������ֵ�Լ��кź��к�

#include<stdio.h>

int main()
{
    int nums[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };
    int i, j;
    int max, sec, max_index[2], sec_index[2];
    int row = sizeof(nums) / sizeof(nums[0]);
    int col = sizeof(nums[0]) / sizeof(int);
    for (i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            if (nums[max_index[0]][max_index[1]] < nums[i][j])
            {
                max = nums[i][j];
                sec = nums[max_index[0]][max_index[1]];
                max_index[0] = i;
                max_index[1] = j;
                sec_index[0] = max_index[0];
                sec_index[1] = max_index[1];
            }
        }
    }
    printf("�ڶ���Ϊ:%d ��%d��%d��\n", sec, sec_index[0], sec_index[1]);
    return 0;
}