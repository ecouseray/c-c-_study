#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5) // 这里是赋值，不是判断
//			printf("%d ", i);
//	}
//	return 0;
//}
// 死循环输出 5




//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
// 则func(1) = （   0   ）

//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
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


// 辗转相除法

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c; 
//	}
//	return 0;
//}

// a * b / 最大公约数 = 最小公倍数


// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 1;
//}

// 法二：创建两个sum，分母为奇数求一个sum，分母为偶数求一个sum，之后求和
// 法三：在循环里面加一个判断，分母为奇数就+，分母为偶数就-

// arr[0] ----> *(arr + 0)
// arr[1] ----> *(arr + 1)


//#include <stdio.h>
//void print(int n)
//{
//    if (n > 9)
//    {
//        return (n / 10);
//    }
//    return n % 10;
//  ﻿
//}﻿
//int main()
//    {
//        int n = 0;
//        scanf("%d", &n);
//        print(n);
//        return 0;
//    }


//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

// 数组、
// C99 下的变长数组、不可初始化
// 初始化
// 不完全初始化  没有初始化的元素 默认为零
// arr[0]  --> *(arr + 0)

// 

//int main()
//{
//	int a = 10;
//	int arr[10] = { 0 };
//	printf("%p\n", &a);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//}

// 随着 数组 下标的 递增， 其中的地址也是递增的

//int digui(int n)
//{
//	if (1 == n)
//		return 1;
//	else
//		return n * (digui(n - 1));
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = digui(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d" ,&n);
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


// 实现strlen()

//int mystrlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//int mystrlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + mystrlen(str + 1);
//}
//
//int main()
//{
//	printf("%d\n", mystrlen("abc"));
//	return 0;
//}

// 字符串逆序（递归实现）

//char* nixv(char* str)
//{
//
//}
//int main()
//{
//	char str = "Hello New Life";
//	nixv(str);
//	return 0;
//}


// 计算一个数的每位之和（递归实现)

//int qiuhe(int num)
//{
//	if (num < 10)
//	{
//		return num;
//	}
//	else
//	{
//		return (num % 10) + qiuhe(num / 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", qiuhe(num));
//	return 0;
//}


// 递归实现n的k次方

//int ncifang(int n, int cifang)
//{
//	if (0 == cifang)
//		return 1;
//	else if (1 == cifang)
//		return n;
//	else
//	{
//		return n * ncifang(n, cifang - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int cifang = 0;
//	scanf("%d %d", &n, &cifang);
//	printf("%d\n", ncifang(n, cifang));
//	return 0;
//}


// fib()

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (1 == n || 2 == n)
//	{
//		return 1;
//	}
//	else
//	{
//		while (n >= 3)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//	}
//	return c;
//}


//int fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//	{
//		return (fib(n - 1) + fib(n - 2));
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}


