#define _CRT_SECURE_NO_WARNINGS 


//#include <stdio.h>
//
//// 最小公倍数
//int main()
//{
//	int a = 0, b = 0;
//	int num = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	num = b;
//	while (1)
//	{
//		if ((num % a == 0) && (num % b == 0))
//			break;
//		num += b;
//	}
//	printf("%d\n", num);
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//
//void reverse(char* left, char* right)
//{
//    assert(left);
//    assert(right);
//
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[101] = { 0 };
//    //输入
//    gets(arr);//I like beijing.
//    //逆置
//    int len = strlen(arr);
//    //1. 逆序整个字符串
//    reverse(arr, arr + len - 1);
//    //2. 逆序每个单词
//    char* start = arr;
//
//    while (*start)
//    {
//        char* end = start;
//        while (*end != ' ' && *end != '\0')
//        {
//            end++;
//        }
//        reverse(start, end - 1);
//        if (*end != '\0')
//            end++;
//        start = end;
//    }
//
//    //输出
//    printf("%s\n", arr);
//
//    return 0;
//}

// release 版本 会对 代码进行优化
// debug 版本 内存的使用规则是：先使用高地址后使用低地址
// release 版本 内存的使用规则：先使用低地址，后使用高地址
// VS2019中
//



// 数据的存储
// 数据类型：
// tips：
// 标准规定：sizeof(long) >= sizeof(int)
// 
// 整形：
// char unsigned char  字符的本质上存储的是：ascII码，属于整形
// 特殊:char  signed char  unsigned char
//	    char 到底是 signed char 还是 unsigned char 是标准未定义的，取决于编译器的实现
// 
// short
// int
// long
// long long 
// 生活中的一些值，是没有负数的
// 符号位0表示整数、符号位1表示负数
// 
// 
// 浮点数家族：
// float
// double
// 表示小数
// 
// 构造类型：（自定义类型 - 我们自己创建出来新的类型）
// 数组类型
// int arr1[5]  类型: int [5]
// int arr2[8]  类型: int [8]
// char arr[10] 类型: char [10]
// 
// 结构体类型 struct
// 枚举类型 enum
// 联合类型 union
// 
// 
// 指针类型：
// 
// 空类型：
// 
// 数值有不同的表示形式：
// 2进制
// 8进制
// 10进制
// 16进制
// 十进制的21
// 0b101010
// 025
// 21
// 0x15
// 
// 整数的二进制形式表示形式有3种：
// 正整数，三码相同；负整数，三码需要计算
// 原码：直接通过正负的形式写出的二进制序列就是原码
// 反码：原码符号位不变其他位按位取反
// 补码：反码 + 1
// 
// 只要是整数：内存中存放的是补码的二进制序列
// 在计算机系统中，数值一律用补码来表示和存储。原因在于，使用补码，可以将符号位和数值域统一处理；
// 同时，加法和减法也可以统一处理（CPU只有加法器）此外，补码与原码相互转换，其运算过程
// 是相同的，不需要额外的硬件电路。(原码 取反 +1 成补码  补码 取反 +1 成原码)
// 
// 
// 占四个字节存放，那就会设计到顺序的问题了
// 一字节单位讨论
// 大端字节序 存储 ： 高位字节序的内容存放在低地址，低位字节序的内容放在高地址
// 小端字节序 存储 ： 高位字节序的内容存放在高地址，低位字节序的内容放在低地址
// 
// 
// 



// 验证计算机硬件是大端还是小段？
//#include <stdio.h>
//int main()
//{
//	int a = 0x00000001;
//	char* pa = (char*)&a;
//	//输出 00 是 大端
//	//输出 01 是 小端
//	printf("%x\n", *pa);
//	return 0;
//}

//输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

// char 类型 10000000 表示 -128（不会计算，直接解析）

#include <stdio.h>
int main()
{
	char a = 0x01223344;
	printf("%d\n", a);

	return 0;
}
