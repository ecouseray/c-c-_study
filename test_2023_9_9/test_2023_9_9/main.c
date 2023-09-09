#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// 使用局部变量的值做一些计算，而不操作原来的局部变量
// 值传递
// 
// 如果需要修改原来的局部变量
// 址传递

// 实参：真实传递给函数的值，可以是常量、变量、表达式、函数等
// 形参：函数名后括号内的变量，在函数调用是时候才实例化，才分配内存空间，函数调用完就会销毁
// 形参实例化后是实参的一份临时拷贝

// 函数的调用：
// 传值调用:分配不同的内存块
// 传址调用:让函数与函数外的变量产生联系


// 写一个函数，判断一个数是不是素数
// 打印100 ~ 200 之间的素数

// 只能被 1 和 自己本身 整除
//void judge_sushu()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// 判断
//		// 拿二和i - 1 试除
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (0 == i % j)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//}
//
//int main()
//{
//	judge_sushu();
//	return 0;
//}


// 当一个数字不是素数
// m = a * b
// 16 = 2 * 8
//    = 4 * 4
// a 和 b 中 一定有一个数字 <= sqrt(m) （开平方m）
// 因为偶数比不可能是素数 所以可以在循环里面避开所有的素数

// sqrt() 函数 对一个double类型的数开平方，返回一个double 类型的值，也可以对int类型开平方

//#include <math.h>
//void judge_sushu()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		// 判断
//		// 拿二和i - 1 试除
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (0 == i % j)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//}
//int main()
//{
//	judge_sushu();
//	return 0;
//}


//#include <math.h>
//int judge_sushu(int i)
//{
//	int flag = 1;
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (0 == i % j)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//
//	if (1 == judge_sushu(input))
//	{
//		printf("是\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int x = a > b ? a : b;
//	int y = a > b ? b : a;
//	if (x % y == 0)
//	{
//		printf("%d 和 %d 的最大公约数位:%d\n", a, b, y);
//	}
//	else
//	{
//		for (int i = y; i >= 1; i--)
//		{
//			if (x % i == 0 && 0 == y % i)
//			{
//				printf("%d 和 %d 的最大公约数位:%d\n", x, y, i);
//				break;
//			}
//		}
//	}
//	return 0;
//}


// 能被四整除，并且不能被100整除
// 能被四百整除
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//int erfenchazhao(int* arr, int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}	
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	if (-1 != erfenchazhao(arr, sz, k))
//	{
//		printf("下标是:%d\n", erfenchazhao(arr, sz, k));
//	}
//	else
//	{
//		printf("找不到...\n");
//	}
//	return 0;
//}

// 函数的嵌套调用
// 函数可以嵌套调用，但是不可以嵌套定义

// 函数的链式访问  依赖  函数的返回值

//int main()
//{
//	//size_t a = 10;
//	printf("%d", printf("%d", printf("%d", 43)));
//}

// 函数不写返回值的时候，默认返回类型是 int
// 函数的返回值，参数，一定要表述清楚

//int main(void)
//{
//	printf("Hello World\n");
//	return 0;
//}


// main 函数 本质上是有参数的  有 三个参数

//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}


