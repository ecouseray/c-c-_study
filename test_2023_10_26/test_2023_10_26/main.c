/*

27.移除元素

思路：
    两个指针(src, dst)，初始时同时指向数组的第一个元素，用src所指向的元素与val比较，
    如果不相同，则将src指向位置元素拷入dst指向的位置，之后src和dst指针向后走；
    如果相同，则src直接向后走
    (src一直向后走，遍历整个数组，dst只有在向其位置上拷贝元素才向后走)

实现：
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
        int total_day = day;//先把当前月份天数加上
        if (is_leap_year(year) &&month > 2) 
        { //若闰年，且月份大于2月，则在平年基础上+1
            total_day += 1;
        }
        for (int i = month - 1; i > 0; i--) 
        {
            total_day += month_day[i];//向前累加每月的天数即可
        }
        printf("%d\n", total_day);
    }
    return 0;
