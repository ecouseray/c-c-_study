#define _CRT_SECURE_NO_WARNINGS 




/*
给定两个数，求这两个数的最大公约数
例如：
输入：20 40
输出：20
*/

/*#include <stdio.h>
int main()
{
	int num = 0;
	int num1 = 0;
	scanf("%d%d", &num, &num1);
	
	int a = num;
	int b = num1;
	int c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;

	}
	printf("%d\n", b);
	*///return 0;
//}



/*
打印1000年到2000年之间的闰年
*/

/*
写一个代码：打印100~200之间的素数
*/

/*
写代码将三个整数数按从大到小输出。
例：
输入：2 3 1
输出：3 2 1
*/

/*
写一个代码打印1-100之间所有3的倍数的数字
*/

/*
编写代码在一个整形有序数组中查找具体的某个数
要求：找到了就打印数字所在的下标，找不到则输出：找不到。
*/

/*
猜数字游戏
*/

/*
编写程序数一下 1到 100 的所有整数中出现多少个数字9
*/

/*
计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
*/

/*
求10 个整数中最大值
*/

/*
在屏幕上输出9*9乘法口诀表
*/

/*
实现一个函数，判断一个数是不是素数。
利用上面实现的函数打印100到200之间的素数。
*/

/*
实现函数判断year是不是润年。
*/

/*
实现一个函数来交换两个整数的内容。
*/

/*
实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。
*/

/*
递归方式实现打印一个整数的每一位
*/

/*
递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
*/

/*
递归和非递归分别实现strlen(指针方法也写)
*/

/*
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列，不是逆序打印。
要求：不能使用C函数库中的字符串操作函数。
比如:
*/

/*
写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
输入：1729，输出：19
*/

/*
编写一个函数实现n的k次方，使用递归实现。
*/

/*
递归和非递归分别实现求第n个斐波那契数
例如：
输入：5  输出：5
输入：10， 输出：55
输入：2， 输出：1
*/

/*
完成三子棋游戏代码
*/

/*
实现一个对整形数组的冒泡排序
*/

/*
创建一个整形数组，完成对数组的操作
实现函数init() 初始化数组为全0
实现print()  打印数组的每个元素
实现reverse()  函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值。
*/

/*
将数组A中的内容和数组B中的内容进行交换。（数组一样大）
*/

/*
完成扫雷游戏代码。
*/

/*
编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子:
1999 2299
输出例子:7
*/

/*
获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
*/

/*
统计二进制中1的个数
*/

/*
不允许创建临时变量，交换两个整数的内容
*/

/*
求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
例如：2+22+222+2222+22222
*/

/*
求出0～100000之间的所有“水仙花数”并输出。
“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
*/

/*
写一个函数打印arr数组的内容，不使用数组下标，使用指针。
arr是一个整形一维数组。
*/

/*
喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
*/

/*
打印菱形
*/

/*
写一个函数，可以逆序一个字符串的内容。
*/

/*
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
*/

/*
模拟实现库函数strlen
*/

/*
模拟实现库函数strcpy
*/

/*
判断三角形，给定三条边，看能否构成三角形，并且判断是什么三角形？
*/

/*
求二进制中1的个数
得到十进制的每一位：我们的操作是 %10 /10,那么得到二进制中的每一位我们可以类比操作：%2，/2
*/

/*
青蛙跳台阶
*/

/*
删除指定数组中的某元素
*/



/*
给定一个数组，求一个数组中的最大值与最小值之差
*/

//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	int max = 0;
//	int min = 100;
//	int num = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &num);
//		if (i > max)
//			max = i;
//		if (i < min)
//			min = i;
//	}
//	printf("%d, %d", max, min);
//	return 0;
//}





/*
多个大小写字母转换
*/

//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((scanf("%c", &ch)) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//	}
//	return 0;
//}


/*
// 变种水仙花数Lily Number
// 655 = 6 * 55 + 65 * 5
10000 ~ 99999
*/

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int tmp = i;
//		int k = 0;
//		
//		int n = 0;
//		for (n = 1; n <= 5; n++)
//		{
//			k = (tmp / (int)pow(10, n)) * (tmp % (int)pow(10, n));
//			sum += k;
//		}
//
//		if (sum == i)
//			printf("%d ", i);
//		
//	}
//	return 0;
//}



//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 99999; i++)
//	{
//		int n = 1;
//		int sum = 0;
//		int k = 0;
//
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//
//		while (tmp)
//		{
//			k = tmp % 10;
//			sum += pow(k, n);
//			tmp /= 10;
//		}
//		
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

/*
获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
*/

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 31; i += 2)
//	{
//		arr1[j] = (a >> i) & 1;
//		j++;
//	}
//	for (j = 0, i = 0; i <= 30; i += 2)
//	{
//		arr2[j] = (a >> i) & 1;
//		j++;
//	}
//	printf("偶数：\n");
//	for (i = 15; i >= 0; i--)
//		printf("%d ", arr1[i]);
//	printf("\n奇数:\n");
//	for (i = 15; i >= 0; i--)
//		printf("%d ", arr2[i]);
//	return 0;
//}


/*
不创建临时变量，交换两个变量的值
*/

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 120;
//	printf("a = %d   b = %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a = %d   b = %d\n", a, b);
//	return 0;
//}




/*
两个有序序列合并
*/
//#include <stdio.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 2,4,6,8,10,1,3,5,7,9 };
//
//	int i = 0;
//	int j = 0;
//
//	while (i < 10 && j < 10)
//	{
//
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//
//	if (i < 10)
//	{
//		for (;i < 10; i++)
//			printf("%d ", arr1[i]);
//	}
//	else
//	{
//		for (; j < 10; j++)
//			printf("%d ", arr2[j]);
//	}
//	return 0;
//}