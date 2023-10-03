#define _CRT_SECURE_NO_WARNINGS 


/*

在ANSI C的任何一种实现中，存在两个不同的环境。
第1种是翻译环境，在这个环境中源代码被转换为可执行的机器指令。
第2种是执行环境，它用于实际执行代码

源文件(.c)通过 编译器编译之后生成(目标文件.obj)
每一个源文件都要单独通过编译器生成目标文件
Linux 环境下 使用gcc 编译器编译过后 生成的是 .o目标文件


多个目标文件一起 + 链接库 经过 链接器的处理最终生成可执行程序(.exe文件)

预处理阶段：
	头文件的包含
	define 定义的符号的替换、删除定义符号
	注释的删除

	都是一些文本的操作

编译阶段：
	把c语言代码转化为汇编代码
	语法分析、词法分析、符号分析、语义分析

	其中符号分析：
	会将一些全局的符号汇总出来

汇编阶段：
	生成.o文件
	把汇编代码转化为二进制指令

	形成符号表

eg： 现有两个.c 文件 一个.c文件中汇总符号 汇总出来 Add
					另一个文件汇总符号 汇总出来Add main

链接阶段：
1.合并段表(不同文件中，相同文件段的数据，整合放在一个文件中)
2.符号表的合并和重定位



运行环境
程序执行的过程：

1. 程序必须载入内存中。在有操作系统的环境中：一般这个由操作系统完成。在独立的环境中，程序
的载入必须由手工安排，也可能是通过可执行代码置入只读内存来完成。
2. 程序的执行便开始。接着便调用main函数。
#include <stdio.h>
int main()
{
 int i = 0;
 for(i=0; i<10; i++)
 {
 printf("%d ", i);
 }
 return 0;
}
3. 开始执行程序代码。这个时候程序将使用一个运行时堆栈（stack），存储函数的局部变量和返回
地址。程序同时也可以使用静态（static）内存，存储于静态内存中的变量在程序的整个执行过程
一直保留他们的值。
4. 终止程序。正常终止main函数；也有可能是意外终止。

*/



/*

预处理：

__FILE__      //进行编译的源文件
__LINE__     //文件当前的行号
__DATE__    //文件被编译的日期
__TIME__    //文件被编译的时间
__STDC__    //如果编译器遵循ANSI C，其值为1，否则未定义




#define MAX 1000
#define reg register          //为 register这个关键字，创建一个简短的名字
#define do_forever for(;;)     //用更形象的符号来替换一种实现
#define CASE break;case        //在写case语句的时候自动把 break写上。

// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
#define DEBUG_PRINT printf("file:%s\tline:%d\t \
                          date:%s\ttime:%s\n" ,\
                          __FILE__,__LINE__ ,       \
                          __DATE__,__TIME__ )


*/

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%s  LINE : %d  i = %d\n", __FILE__, __LINE__, i);
//	}
//
//	return 0;
//}



/*

预处理：
宏：


*/

#define SQUARE(X) ((X) * (X))   
// 这个地方括号必须和SQUARE连在一起
// 写宏的时候尽量带括号

//#include <stdio.h>
//int main()
//{
//	int r = SQUARE(5);
//	printf("%d\n", r);
//	return 0;
//}

#include <stdio.h>

#define PRINT(N) printf("the value of "#N" is %d\n", N)


//int main()
//{
//	int a = 10;
//	PRINT(a);
//	int b = 10;
//	PRINT(b);
//
//	return 0;
//}

//#define PRINT(FORMAT, VALUE) printf("the value is "FORMAT"\n", VALUE);
//#define PRINT(N, FORMAT) printf("the value of "#N" is "FORMAT"\n", N)
//
//int main()
//{
//	//PRINT("%d", 10);
//	float a = 3.14;
//	PRINT(a, "%lf");
//	return 0;
//}


/*

使用 # ，把一个宏参数变成对应的字符串


##可以把位于它两边的符号合成一个符号。
它允许宏定义从分离的文本片段创建标识符。




*/

//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main()
//{
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	int z = ((x++) > (y++) ? (x++) : (y++));
//	printf("x=%d y=%d z=%d\n", x, y, z);
//}
//输出的结果是什么？

//#define MALLOC(num, type) (type*)malloc((num) * sizeof(type))
//int main()
//{
//	int* p = MALLOC(10, int);
//
//
//	return 0;
//}


//int main()
//{
//	char* str = "helloworld";
//	char* str2 = "helloworld" + strlen(str) - 1;
//	printf("%p\n", str);
//	printf("%p\n", str2);
//	return 0;
//}\


/*

把宏名全部大写
函数名不要全部大写

*/


//#define M 100
//int main()
//{
//	printf("%d\n", M);
//#undef M
//	printf("%d\n", M);
//	return 0;
//}


// #undef 移除一个宏定义



/*

命令行定义
许多C 的编译器提供了一种能力，允许在命令行中定义符号。用于启动编译过程。
例如：当我们根据同一个源文件要编译出不同的一个程序的不同版本的时候，这个特性有点用处。（假
定某个程序中声明了一个某个长度的数组，如果机器内存有限，我们需要一个很小的数组，但是另外一
个机器内存大写，我们需要一个数组能够大写。）

*/

//#include <stdio.h>
//int main()
//{
//	int array[ARRAY_SIZE];
//	int i = 0;
//	for (i = 0; i < ARRAY_SIZE; i++)
//	{
//		array[i] = i;
//	}
//	for (i = 0; i < ARRAY_SIZE; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	return 0;
//}

// gcc -D ARRAY_SIZE=10 programe.c

/*

1.
#if 常量表达式
//...
#endif
//常量表达式由预处理器求值。
如：
#define __DEBUG__ 1
#if __DEBUG__
 //..
#endif


2.多个分支的条件编译
#if 常量表达式
 //...
#elif 常量表达式
 //...
#else
 //...
#endif


3.判断是否被定义
#if defined(symbol)
#ifdef symbol


#if !defined(symbol)
#ifndef symbol


4.嵌套指令
#if defined(OS_UNIX)
	#ifdef OPTION1
		unix_version_option1();
	#endif

	#ifdef OPTION2
		unix_version_option2();
	#endif

#elif defined(OS_MSDOS)
	#ifdef OPTION2
		msdos_version_option2();
	#endif
#endif

*/


//#define M 100

//int main()
//{
//#if defined(M)
//	printf("max\n");
//#endif
//
//	return 0;
//}


// <> he ""
// 查找策略不同
// <> 直接去库目录下查找
// "" 先去代码路径下查找，找不到再去库目录下去查找
//


/*

写一个宏，来计算结构体中某变量相对起始位置的偏移量

*/
//#include <stddef.h>
//
//#define my_offsetof(type, m_name) (size_t)&(((type*)0)->m_name)
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", my_offsetof(struct S, c1));
//	printf("%d\n", my_offsetof(struct S, i));
//	printf("%d\n", my_offsetof(struct S, c2));
//	return 0;
//}