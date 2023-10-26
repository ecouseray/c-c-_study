/*

27.�Ƴ�Ԫ��

˼·��
    ����ָ��(src, dst)����ʼʱͬʱָ������ĵ�һ��Ԫ�أ���src��ָ���Ԫ����val�Ƚϣ�
    �������ͬ����srcָ��λ��Ԫ�ؿ���dstָ���λ�ã�֮��src��dstָ������ߣ�
    �����ͬ����srcֱ�������
    (srcһֱ����ߣ������������飬dstֻ��������λ���Ͽ���Ԫ�ز������)

ʵ�֣�
int removeElement(int* nums, int numsSize, int val) {
    int src = 0, dst = 0;
    while (src < numsSize)
    {
        if (nums[src] != val)
        {
            nums[dst] = nums[src];
            src++, dst++;
        }
        else
        {
            src++;
        }
    }
    return dst;
}

*/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n = 5;
//
//    printf("%d\n", (int)pow(10, n));
//    return 0;
//}

//int* printNumbers(int n, int* returnSize) {
//    *returnSize = pow(10, n) - 1;
//    int* ptrArr = (int*)malloc(sizeof(int) * (*returnSize));
//    int i = 0;
//    for (i; i < *returnSize; ++i)
//    {
//        ptrArr[i] = i + 1;
//    }
//    return *ptrArr;
//}

#include <stdio.h>
int is_leap_year(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int main() 
{
    int month_day[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int year, month, day;
    while (~scanf("%d %d %d", &year, &month, &day)) 
    {
        int total_day = day;//�Ȱѵ�ǰ�·���������
        if (is_leap_year(year) &&month > 2) 
        { //�����꣬���·ݴ���2�£�����ƽ�������+1
            total_day += 1;
        }
        for (int i = month - 1; i > 0; i--) 
        {
            total_day += month_day[i];//��ǰ�ۼ�ÿ�µ���������
        }
        printf("%d\n", total_day);
    }
    return 0;
