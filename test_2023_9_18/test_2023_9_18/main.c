#define _CRT_SECURE_NO_WARNINGS 

// 调试专题
// 什么是bug？
// 历史上的臭虫...
// 什么是调试？
// 逆流而上查找错误
// 发现或减少计算机程序或者电子仪器设备中程序错误的一个过程
// 步骤：
// 1.发现程序错误的存在
// 2.以隔离、消除等方式对错误进行定位
// 3.确定错误产生的原因
// 4.提出纠正错误的解决办法
// 5.对程序错误予以改正，重新测试
// 
// debug和release的区别	
// 调试版本
// 发布版本
// 
// Windows环境下的调试（VS2019）
// 快捷键：
// F5，直接到第一个断点位置，
// F9，设置或取消断点
// F10，逐过程（不进函数）
// F11，逐步骤（进函数）
// 调试之前，要明白程序是怎么执行的，在调试的时候，看时候按照自己预想的步骤执行

//
// 10次循环，假如说第五次循环有问题：条件断点
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", &arr[i]);
//	}
//	return 0;
//}

// 调试的过程中观察其中的值
// 调试开始后，调试窗口，中
//  
// 数组传入后，监视窗口只能查看一个变量
// 数组名,观察的个数 （就可以观察到多个变量）
//#include <stdio.h>
//void test2()
//{
//	printf("hello!");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe %d %d\n", i, arr[i]);
//	}
//	return 0;
//}
// 研究程序死循环的原因。

// 栈区内存使用习惯
// 先使用高地址，再使用低地址
// 变量的创建是从高地址向低地址延申的
// 数组元素的地址：随之数组下标的增长，地址是由低到高的
// 先int i 之后 int arr
// 当数组适当的越界，就可能会覆盖i，可能就会导致死循环
// 《C陷阱与缺陷》


/*
什么样的代码是优秀的代码：
1. 代码运行正常
2. bug很少
3. 效率高
4. 可读性高
5. 可维护性高
6. 注释清晰
7. 文档齐全

常见的coding技巧：
1. 使用assert
2. 尽量使用const
3. 养成良好的编码风格
4. 添加必要的注释
5. 避免编码的陷阱。

*/
#include <stdio.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++, *src != '\0');
//	*dest = *src;
//}

//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++);
//	
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = "Hello World!";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}

// const 修饰指针变量
//  1.const 放在 * 的左边
// 意思是：p指向的对象不能通过p来改变了，但是p变量本身的值是可以改变的
// 2.const 放在 * 的右边
// 意思是：p指向的对象可以通过p来修改，但是不能修改p变量本身的值.
//

//int main()
//{
//	//const int num = 10;
//	//const int* p = &num;
//	//int n = 20;
//	//p = &n;
//	int num = 10;
//	int* const p = &num;
//	//const 限制 p， 让p自己本身的值不能发生变化
//	*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);//()内表达式为假报错
//	int count = 0;
//	while (count++, *str++ != '\0');
//
//	return count - 1;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	printf("%d\n", my_strlen(NULL));
//	return 0;
//}

// Ctrl + f 查找

// 编程常见错误
// 1.编译型错误（语法错误）
// 2.链接型错误，出现在链接期间， static 修饰全局变量（函数），还要引用。
// 或者函数没有定义，_Add无法解析的外部符号。
// 3.运行时错误（只能调试）
// 
// 


// git，版本管理工具
// 代码仓库
// show log
//


// 判断三角形，给定三条边，看能否构成三角形，并且判断是什么三角形？
void judge(int a, int b, int c)
{
	if (b > a)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (c > a)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	
	if (b + c >= a && ((a * a) == ((b * b) + (c * c))))// 是三角形
	{
		printf("能构成三角形，直角三角形\n");
	}
	else if (b + c >= a && a == b && b == c)
	{
		printf("能构成三角形，等边三角形\n");
	}
	else if (b + c >= a && b == c && a * a == ((b * b) + (c * c)))
	{
		printf("能构成三角形，等腰直角三角形\n");
	}
	else if (b + c >= a)
	{
		printf("能构成三角形，普通三角形\n");
	}
	else
	{
		printf("不能构成三角形\n");
	}
}
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	judge(a, b, c);
	return 0;
}