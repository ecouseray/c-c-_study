#define _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>



/*
枚举 -- 一一列举
星期
血型
性别
月份
*/

enum day 
{
	// 枚举常量
	Mon = 1,// 0   // 1
	Tues,// 1      // 2
	Weh,// 2
	Thur,// 3
	Fri,// 4
	Sat,// 5
	Sun// 6
};

// 枚举优点?
// 可以使用#define 定义，为什么要用枚举
// 1.增加代码的可读性和可维护性 (通讯录中的每个选项，可以使用枚举)
// 2.和#define定义的标识符比较，枚举有类型检查，更加严谨
// 3.防止了命名污染（封装）
// 4.便于调试
// 5.使用方便，一次可以定义多个常量
//

/*
.c  预处理  编译  汇编  链接   #define 定义的常量是发生替换，在预处理阶段就被替换掉，而枚举不会被替换，所以#define定义的不便于调试
*/

//int main()
//{
//
//	enum day d = Fri;
//
//	return 0;
//}

/*

联合（共用体）：
联合也是一种特殊的自定义类型
这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块空间（所以联合也叫共用体）。


*/
//union Un
//{
//	int a;
//	char c;
//	// a 和 c 公用同一块空间
//};
//// 联合体的最小大小是其中最大元素的大小
//
//int main()
//{
//	union Un u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//	return 0;
//}

// 判断当前计算机的大小端存储

void chack_sys()
{
	union
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c; // 返回1是小端，返回0是大端
}

union Un
{
	char str[5];  // 这个地方对其的时候按照char类型对其
	int i;
}u;

/*
共用体大小：
联合的大小至少是最大成员的大小。
当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
*/

int main()
{
	//printf("%p\n", &u);
	//printf("%p\n", &u.i);
	//printf("%p\n", &u.str);
	//printf("%p\n", ((char*)(&u + 1) - 1));
	//enum day a = Fri;
	//printf("%zu\n", sizeof(a)); // 4

	int i = 10;
	printf("%p\n", &i);
	printf("%p\n", ((char*)(&i+1) - 1));
}