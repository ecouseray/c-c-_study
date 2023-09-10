#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	printf("请输入要求阶乘的数:>");
//	scanf("%d", &n);
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d的阶乘为:%d", n, ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	printf("请输入要求阶乘的数的和:>");
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("要求阶乘的数的和为%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("现有一组有序数列，请输入要查找的数:>");
//	scanf("%d", &k);
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
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
//			printf("已找到，数组下标为:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
// 
// 时间复杂度： log以2为底N的对数
// 可以理解成：完全二叉树的深度
// N / 2 / 2 / 2 / ... = 1
// N = 2 ^ x    x 是查找次数
// x = log以2为底N的对数
//  
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <windows.h>
//void menu()
//{
//	printf("******************************************\n");
//	printf("**********     1.开始游戏        *********\n");
//	printf("**********     0.退出游戏        *********\n");
//	printf("******************************************\n");
//}
//
//int game()
//{
//	int guess = rand() % 100 + 1;
//	int input = 0;
//	printf("现在产生了 1 ~ 100 的一个随机数，猜数字游戏开始\n");
//	while (1)
//	{
//		scanf("%d", &input);
//		if (input > guess)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < guess)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("nb\n");
//			break;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//
//	system("shutdown -s -t 180");
//	printf("注意：180秒后，您的电脑将关机\n");
//	printf("让我们玩一个游戏\n");
//
//	menu();
//	printf("开始游戏，请选择:>");
//	scanf("%d", &input);
//	int ret = 0;
//	switch(input)
//	{
//	case 1:
//		ret = game();
//		break;
//	case 0:
//		printf("退出游戏,坐等关机\n");
//		break;
//	default:
//		printf("输入错误，请重新输入\n");
//		break;
//	}
//	if (1 == ret)
//	{
//		printf("恭喜你，过关！");
//		printf("电脑关机已取消\n");
//		system("shutdown -a");
//	}
//	return 0;
//}

// 二分查找
// 计算BinarySearch的时间复杂度？
//int BinarySearch(int* a, int n, int x)
//{
//	assert(a);
//	int begin = 0;
//	int end = n - 1;
//	// [begin, end]：begin和end是左闭右闭区间，因此有=号
//	while (begin <= end)
//	{
//		int mid = begin + ((end - begin) >> 1);
//		if (a[mid] < x)
//			begin = mid + 1;
//		else if (a[mid] > x)
//			end = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
// O(log以2为底N的对数)


// 递归计算阶乘
//
//long long Fac(size_t N)
//{
//	if (0 == N)
//		return 1;
//
//	return Fac(N - 1) * N;
//}

// 递归算计如何计算时间复杂度：递归次数 * 每次递归函数的次数


//long long Fib(size_t N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}


// ===============================================================================================================================

// 函数的声明与定义
//#include "add.h"
// <> 一般用于包含库函数文件， "" 一般用于包含自己的文件
// <> 从系统文件中查找，找不见再去当前文件下找
// "" 从但当前文件下查找， 找不见再去当前文件下找 
// 函数的声明（只是告诉你有，但是真的有没有要看函数定义）
//void add(int x, int y);
//
//int main()
//{
//	return 0;
//}


// 函数的定义（真正的决定函数存在还是不存在）
//void add(int x, int y)
//{
//
//}

// 一般要满足 先声明，后使用

// 1.在协作的角度里说，不应该把文件写在一个文件中
// 2.模块化	xxx.c  xxx.h	

// 包含头文件，本质上是把 头文件里的内容全部拷贝过来

// 程序员 将 add.c 和 add.h 的 编译成静态库 + 头文件 出售给  别人
// add.lib
// 使用
// 将 买回来的 .h 文件 和 .lib 静态库导入之后
// pragma comment(lib, "add.lib")

// ===============================================================================================================================

// 递归
// 函数间接或直接调用自身
// 一种方法，它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解，递归策略

// 递归的主要思考方式在于：把大事化小

// 输入：1234，输出 1 2 3 4
// 递归实现：
// print(1234)
// print(123) 4
// print(12) 3 4
// print(1) 2 3 4
// 1 2 3 4

// 存在限制条件，当满足这个限制条件的时候，递归便不再继续。
// 每次递归调用之后越来越接近这个限制条件。

//void print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	unsigned num = 0;
//	scanf("%u", &num);
//	print(1234);
//	return 0;
//}

// 编写函数不允许创建临时变量，求字符串的长度。

//int main()
//{
//	int ret = strlen("abc");
//	printf("%d", ret);
//	return 0;
//}

//int mystrlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + mystrlen(str + 1);
//	}
//	else {
//		return 0; 
//	}
//	
//}
//int main()
//{
//	printf("%d\n", mystrlen("abc"));
//	return 0;
//}


//int mydigui(int num)
//{
//	if (num > 1)
//		return num * (mydigui(num - 1));
//	else
//		return 1;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", mydigui(num));
//	return 0;
//}

// 递归与迭代
// 循环就是一种迭代
// 迭代的方式 == 非递归

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

// 在调试 factorial 函数的时候，如果你的参数比较大，那就会报错： stack overflow（栈溢出）
// 这样的信息。
// 系统分配给程序的栈空间是有限的，但是如果出现了死循环，或者（死递归），这样有可能导致一
// 直开辟栈空间，最终产生栈空间耗尽的情况，这样的现象我们称为栈溢出
//int Fib(int n)
//{
//	int c = 0;
//	int a = 1;
//	int b = 1;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	if (n == 1 && 2 == n)
//		c = 1;
//	return 0;
//}
//int main()
//{
//	// 斐波那契数列
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//	return 0;
//}

// ===============================================================================================================================

// 函数栈帧的创建与销毁

// 1.局部变量 是如何创建的
// 2.为什么局部变量的值是随机值
// 3.函数是怎样进行传参的，传参的顺序是怎么样的？
// func(1,2)
// 利用栈传递，从右向左传递，2入栈，1入栈，在取的时候就是 1 ， 2
// 4.形参和实参是什么关系
// 它们用相同的值
// 5.函数调用是怎么做到的
// 
// 6.函数调用结束后是怎么进行返回的
// 保存原来函数的地址

// 寄存器 eax、ebx、ecx、edx
// 重点了解 edp 和 esp
// 函数栈帧理解不行理解 esp 和 edp 两个寄存器
// esp 和 ebp 两个寄存器 存放的是地址 ， 是用来维护函数栈帧的。
// 每一个函数的调用都要创建一个空间，并且这个空间是在栈上开辟的 

// ebp（栈底指针“基址指针”） 指向 高地址   esp（栈顶指针） 指向 低地址

// 在VS2013 中 main函数也是可以被别的函数调用的
// _tmainCRTStartup
// mainCRTStartup   调用上面的，上面的调用main函数 
