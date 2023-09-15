#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// 操作符续集:
// 位操作符： & | ^ 
// & - 按位与    有0为0，两个1才为1
// | - 按位或    有1为1，两个0才为0
// ^ - 按位异或   两个位相同为0，不同为1
// 
// a ^ a = 0;
// 0 ^ a = a;
// 异或操作符支持交换律
//


//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	//00000000 00000000 00000000 00000011  3
//	//10000000 00000000 00000000 00000101
//	//11111111 11111111 11111111 11111011  -5
//
//	//00000000 00000000 00000000 00000011
//	//11111111 11111111 11111111 11111011
//	printf("c = %d\n", c);
//	return 0;
//}



// 不创建临时变量，交换两个变量的值
// 加减法
// 异或法

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前： a = %d，b = %d\n", a, b);
//	a = a + b;
//	b = a - b;// 有溢出风险
//	a = a - b;
//	printf("交换后： a = %d，b = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前： a = %d，b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后： a = %d，b = %d\n", a, b);
//	return 0;
//}


// 编写程序求一个整数二进制中1的个数

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int tmp = a;
//	int count = 0;
//
//	for (int i = 0; i < sizeof(a) * 8; i++)
//	{
//		if (tmp & 1 == 1)
//			count++;
//		tmp >>= 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}


 
// 赋值操作符
// 
// 单目操作符
// !     sizeof     ~     &     *     ()     
// 
// 将一个数字的某一位二进制位置为一
// 将一个数字的某一位二进制位置为零
//


//int main() 
//{
//	int arr[3][4] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//程序输出的结果是什么？

// && 有一个为假就是假，第一个为假的话，后面的就不计算了
// || 有一个为真后面的就为真，当遇到一个真的时候，真的后面的表达式就不计算了
// 短路运算


// 三目操作符

// 逗号表达式

// 下标引用操作符 函数调用操作符 结构体成员访问操作符（结构体指针、结构体对象）

//  3 + 5 == 5 + 3
// arr[7] == 7[arr] 
// *(arr + 7) -- *(7 + arr) == 7[arr] 跳过七个元素




// 编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a ^ b;
//	int count = 0;
//	for (int i = 0; i < sizeof(a) * 8; i++)
//	{
//		if (c & 1 == 1)
//			count++;
//		c >>= 1;
//	}
//	printf("%d", count);
//
//	return 0;
//}

// 获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

void printErJinZhi(int a)
{
	int x = a;
	int x1 = a;
	int arr1[16] = { 0 };
	int arr2[16] = { 0 };
	int j = 0;
	for (int i = 0; i < 32; j++, i+=2)
	{
		arr1[j] = x & 1 ;
		x >>= 2;
	}
	x1 >>= 1;
	for (int i = 1, j = 0; i < 32; j++, i += 2)
	{
		arr2[j] = x1 & 1;
		x1 >>= 2;
	}
	for (int i = 15; i >=0 ; i--)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (int i = 15; i >= 0; i--)
	{
		printf("%d", arr2[i]);
	}
	
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	printErJinZhi(a);
	return 0;
}
// 
// 
// 写一个函数返回参数二进制中 1 的个数。 比如： 15    0000 1111    4 个 1
// 不允许创建临时变量，交换两个整数的内容