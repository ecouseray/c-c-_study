#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// 语句：
// 1.表达式语句
// 2.函数调用语句
// 3.控制语句
// 4.复合语句
// 5.空语句

// 控制语句用于控制程序的执行流程，以实现程序的各种结构方式，它们由特定的语句定义符组成，C语言有九种控制语句

//int main()
//{
//	int a = 1;
//	if (a == 1)
//		printf("hehe\n");
//	if (a = 3)
//		printf("hh\n");
//	if (3 == a)
//	{
//		// 默认 if 后面 跟一条语句，如果要跟多条语句 {}
//	}
//
//	a = 19;
//	if (18 < a < 30)
//	{
//		// a > 18 为真 返回 1 ，1 < 30 为真
//		// 同时有两个判断条件，用 && 链接
//	}
//	
//	return 0;
//}


// 悬空 else 问题 

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
// 上面代码 什么都不输出。else 的配对方式 是 与它最近的 if 配对（没有大括号的情况下），所以什么都不输出。

// == 左边写常量，右边写变量，避免写一个 = 将 判断 写成 赋值

// 判断一个数是否是奇数

//int main()
//{
//	int a = 0;
//	scanf("%d" ,&a);
//	if (1 == (a % 2))
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//	return 0;
//}

// 输出 1 - 100 的的奇数

//int main()
//{
//	//int i = 0;
//	//while (i <= 100)
//	//{
//	//	if (1 == (i % 2))
//	//	{
//	//		printf("%2d\n", i);
//	//	}
//	//	i++;
//	//}
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	case 3:
//		printf("3\n"); 
//		break;
//	case 4:
//		printf("4\n");
//		break;
//	case 5:
//		printf("5\n");
//		break;
//	case 6:
//		printf("6\n");
//		break;
//	case 7:
//		printf("7\n");
//		break;
//	default:
//		printf("err\n");
//		break;
//	}
//	return 0;
//}
// case 后面必须是 整形常量表达式

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("weekday\n");
//		break;
//	case 2:
//		printf("weekday\n");
//		break;
//	case 3:
//		printf("weekday\n");
//		break;
//	case 4:
//		printf("weekday\n");
//		break;
//	case 5:
//		printf("weekday\n");;
//		break;
//	case 6:
//		printf("weekend\n");
//		break;
//	case 7:
//		printf("weekend\n");;
//		break;
//	default:
//		printf("err\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:	
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");;
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");;
//		break;
//	default:
//		printf("err\n");
//		break;
//	}
//	return 0;
//}
// 在逻辑需要的时候，case后面可以不加break;完成多个 值 对应 一个case
// case 后面 可以放字符 ，因为字符存储上本质是存储他的ASCII码值，ASCII也属于整数。
// char 类型 在归类的时候也算整数

// switch 中的 case 中，可以嵌套一个 switch 语句


// ------------------------------------------------------------------------------------------------------------------

// 循环语句

//int main()
//{
//	int i = 0;
//	while (EOF != scanf("%d", &i))
//	{
//		if (1 == (i % 2))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

// while (表达式)  
// 一上来先判断表达式，表达式为真，进入循环，循环体内执行完，再判断表达式...
// break 退出循环

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
// continue 跳过本次 循环体 内后面的东西，直接去判断条件，看要不要进行下一次循环

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		// 2 3 4 6 7 8 9 10 11
//	}
//	return 0;
//}

// break，永久终止循环，continue，跳过本次循环后面的代码，直接去判断部分，进行下一次循环判断


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
// 默认换行解释：
// 输入缓冲区内：a \n 
// 第一次读走 a ，下一次循环 读走 \n
// 
// 可以用来清理缓冲区
// 
// stdin 标准输入， 键盘

// getchar  putchar