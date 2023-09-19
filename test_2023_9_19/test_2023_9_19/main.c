#define _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>

// 多组数的输入
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//
//	}
//	// 原理：scanf函数，读取成功会返回成功读取的字符个数，读取失败会返回EOF
//	return 0;
//}


// 数据在内存中存放的时候，有一个顺序的问题：大小端字节序
// 小端 ： 低位数据存在低地址，高位数据存在高地址

// 任何一个变量/表达式，都有两个属性
// 值属性
// 类型属性
// int a = 3;
// a + 4.5
// 值属性就是 7.5 类型属性是 double
//


// 写一个函数打印arr数组的内容，不适用数组下标，使用指针

// 字符串逆序
// gets();
// 读一行数据
// 计算 a + aa + aaa + aaaa + aaaaa
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &n);
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
// 
// 水仙花数 0 ~ 100000
//#include <math.h>
//int main()
//{
//	int tmp = 0;
//	int i = 0;
//	
//	
//
//	for (i = 0; i <= 10000; i++)
//	{
//		// 计算这个数是多少位的
//		int sum = 0;
//		int n = 1;
//		tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}
// 打印菱形
// 分成上下两个部分
// line  line - 1
// 一行内又是空格和*号的打印 
// 空格：因为空格是随着行数的增加而减少 j < line - 1 - i （很像冒泡排序的内层循环，j < n - 1 - i,冒泡排序，每一趟排序之后，内层循环减少一次）
// * 号 这个地方呢，1 3 5 ... 我们和 整体的循环因子 i 联系起来 2 * i + 1 
// 下半部分 空格的控制： 随行数的增加，空格越来越多， j <= i
// * 号的控制， 2 * i - 1个数 多少 i = line - 1 - i
// 
// 
// 
// 区分： 
// int *arr[10] arr先和[10]结合，说明他是一个数组，数组的元素类型是什么？向左边一看是int* 所以他是一个整形指针数组
// int (*arr)[10] arr先和*结合了，说明他是一个指针，指向的是什么？向外一看是[10]，说明他指向的是一个数组，数组10个元素，每个元素是int类型
// 这是一个数组指针 - 指向数组的指针
// 
// 喝汽水问题：
// 一瓶汽水1元，两个空瓶换一瓶汽水 20 元可以喝多少瓶
// 
// 


//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty % 2 + empty / 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}
