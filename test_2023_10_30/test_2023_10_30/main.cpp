#include <iostream>
#include "cpp.h"

namespace yzk
{
	int year = 100;

	struct stu
	{
		char name[10];
		int year;
	};

	int func(int x)
	{
		return x;
	}
	namespace zzy
	{
		int year = 99;
	}
}


// 命名空间
// 命名空间可以同名，编译器会将同名的命名空间合并成为一个
// 命名空间可以嵌套
// 命名空间的使用

using yzk::year;
using namespace yzk;


int add(int a = 10, int b = 10)
{
	return a + b;
}


//int main()
//{
//	//printf("%d\n", yzk::year);
//	printf("%d\n", add());
//	return 0;
//}



// 构造函数 和 析构函数

// 缺省参数优化构造函数无参和有参的情况

// 析构函数的主要目的应该在于资源是释放，比如说一个类里面的成员函数(方法)
// malloc 动态申请一块空间
// 现在有一个函数调用了他，如果在这个函数调用结束的时候(类的生命周期结束的时候)
// 不去主动书写析构函数释放空间，执行默认的类所对应的析构函数
// 就会造成内存泄漏




// 封装：
// 封装类的时候，类内的方法，可以在类内声明方法，类外定义函数
// 
// 类大小的计算， 空类或者没有成员变量的类的大小是，1，不是为了存放数据，为了占位，
// 在寻址的时候可以找到
//

