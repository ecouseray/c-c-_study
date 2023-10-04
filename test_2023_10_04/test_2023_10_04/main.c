#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

//int main()
//{
//    int i = 0;
//    int j = 0;
// 
//    // 打印前三行
//    for (i = 0; i < 3; i++)
//    {
//        // 打印 ' '
//        for (j = 0; j < 3 - 1 - i; j++)
//        {
//            printf("%c", ' ');
//        }
//        // 打印'#'
//        for (j = 0; j < i * 2 + 1; j++) {
//            printf("%c", '#');
//        }
//        printf("\n");
//    }
//    // 打印后两行
//    for (i = 0; i < 4; i++)
//    {
//        // 打印 ' '
//        for (j = 0; j < i + 1; j++)
//        {
//            printf("%c", ' ');
//        }
//        // 打印'#'
//        for (j = 0; j < 2 * (3 - 1 - i) - 1; j++) {
//            printf("%c", '#');
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


//int main()
//{
//	double d = 0;
//	scanf("%lf", &d);
//	if (d > 0)
//		printf("%d\n", (int)(d + 0.5));
//	else
//		printf("%d\n", (int)(d - 0.5));
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%d%-8d%-8d\n", a, b, c);
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    int x = a / 3600;
//    int y = (a - (3600 * x)) / 600;
//    int z = ((a - (3600 * x)) - (600 * y)) % 60;
//    printf("%d %d %d\n", x, y, z);
//
//}


//#include<stdio.h>
//int digit(int x, int i)
//{
//    if (i == 1)
//    {
//        return x % 10;
//    }
//    else
//    {
//        return digit(x / 10, i - 1) * 10 + x % 10;
//    }
//
//
//}
//int main()
//{
//    unsigned int x = 0, i = 0;
//    scanf("%d %d", &x, &i);
//    int ret = digit(x, i);
//    printf("%d", ret);
//    return 0;
//}

//void Print(int i)
//{
//	if (i < 10)
//	{
//		//return i;
//		//printf("%d ", i);
//	}
//	else
//		Print(i / 10);
//
//	printf("%d ", i % 10);
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Print(i);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    int val;
//    for (int i = 0; i < n; i++)
//    {
//
//        scanf("%d", &val);
//
//        int o = 0, l = 0;
//        while (val) {
//            if (val % 2 == 1) 
//                l++;
//            else 
//                o++;
//            val /= 2;
//        }
//
//        if (l % 2 == 0 && o % 2 != 0)
//            printf("1 ");
//        else if (l % 2 != 0 && o % 2 == 0)
//            printf("0 ");
//        else if (l % 2 == 0 && o % 2 == 0)
//            printf("10 ");
//        else
//            printf("100 ");
//    }
//    return 0;
//}





// atoi 函数
// 模拟实现
// 将字符串转化成整形
#include <stdlib.h>
#include <assert.h>
//1. 空指针
//2. 空字符串
//3. 空格
//4. +-
//5. 越界
//6. 非数字字符
//
//
//#include <ctype.h>
//#include <limits.h>
//
//enum Status
//{
//	VALID,
//	INVALID
//}sta = INVALID;//默认非法
//
//
//int my_atoi(const char* str)
//{
//	int flag = 1;
//	assert(str);
//	if (*str == '\0')
//		return 0;//非法0
//	//跳过空白字符
//	while (isspace(*str))
//	{
//		str++;
//	}
//	//+-
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if(*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			//越界
//			ret = ret * 10 + flag*(*str - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return (int)ret;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		sta = VALID;
//	}
//	return (int)ret;
//}
//
//int main()
//{
//	char arr[200] = "+1234";
//	int ret = my_atoi(arr);
//	if (sta == INVALID)
//	{
//		printf("非法返回:%d\n", ret);
//	}
//	else if (sta == VALID)
//	{
//		printf("合法转换:%d\n", ret);
//	}
//
//	return 0;
//}
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	int a = 0;
	int b = 1;
	int c = a + b;
	scanf("%d", &n);
	while (1)
	{
		if (n == b)
		{
			printf("%d\n", 0);
			break;
		}
		else if (n < b)
		{
			if (abs(a - n) > abs(b - n))
			{
				printf("%d\n", abs(b - n));
			}
			else
			{
				printf("%d\n", abs(a - n));
			}
			break;
		}
		a = b;
		b = c;
		c = a + b;
	}
	return 0;
}

void replaceSpace(char* str, int length) {
	char* cur = str;
	int space_count = 0;
	while (*cur)
	{
		if (*cur == ' ')
			space_count++;
		cur++;
	}
	int end2 = length - 1 + 2 * space_count;
	int end1 = length - 1;
	while (end1 != end2)
	{
		if (str[end1] != ' ')
		{
			str[end2--] = str[end1--];
		}
		else
		{
			end1--;
			str[end2--] = '0';
			str[end2--] = '2';
			str[end2--] = '%';
		}
	}
}