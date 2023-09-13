#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
// Fun(2) ??

// 16

//int mystrlen(char* str)
//{
//	int count = 0;
//	while (count++, *str++ != '\0');
//	return --count;
//}
//int main()
//{
//	char str[] = "abc";
//	printf("%d\n", mystrlen(str));
//	return 0;
//}


// 递归实现 字符串逆序

//int main()
//{
//	char str[7] = "abcdef";
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//
//		left++, right--;
//	}
//	printf("%s\n", str);
//	return 0;
//}

// a b c d e f g
// 递归思想： 交换 a 和 g 之后再 逆序中间的 b c d e f 

int mystrlen(char* str)
{
	int count = 0;
	while (count++, *str++ != '\0');
	return --count;
}
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = mystrlen(str); 
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (mystrlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//void reverse2(char* str)
//{
//	char tmp = *str;
//
//	*str = *(str + mystrlen(str) - 1);
//	*(str + mystrlen(str) - 1) = '\0';
//	if (mystrlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + mystrlen(str) - 1) = tmp;
//}
//
//int main()
//{
//	char str[] = "abcdefg";
//	reverse(str);
//	printf("%s\n" ,str);
//	return 0;
//}

//void reverse(char str[], int left, int right)
//{
//	char tmp = str[left];
//	str[left] = str[right];
//	str[right] = tmp;
//	if (left < right)
//		reverse(str, left + 1, right - 1);
//}
//
//
//int main()
//{
//	char str[] = "abcdefg";
//	int left = 0;
//	int right = mystrlen(str) - 1;
//	reverse(str, left, right);
//	printf("%s\n" ,str);
//	return 0;
//}

// 编写一个函数实现n的k次方，使用递归实现。

//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else if (k > 1)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int arr[10] = { 0 };
//	// 在调试的时候，监控中观察， num 的 类型是 int
//	// arr 的 类型是 int [10] ，把数组名去掉 剩下的就是类型，[]内的10不可以省略
//	return 0;
//}

// sizeof 和 strlen对比
// sizeof 是一个操作符，用来计算变量（类型（用类型所创建出来的变量的大小）），所占用的空间的大小
// 单位是大小，只是计算空间的大小，不关心空间内有什么

// strlen()
// 是一个库函数，是专门用来求字符串长度的，只能针对字符串
// 从参数给定的地址开始，后向找‘\0’，统计 '\0'，之前出现的字符个数

// 变长数组不能初始化的原因：
// 因为变长数组 [] 内 是一个变量，当程序运行起来才会在栈上分配空间以及初始化。
// 所以在代码层面不可以初始化