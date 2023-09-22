#define _CRT_SECURE_NO_WARNINGS 


//#include <stdio.h>
//int func(int n, int m)
//{
//    if (m == 1)
//        return n;
//    else
//        return n * func(n - 1, m - 1);
//}
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int ret = func(n, m);
//    printf("%d", ret);
//    return 0;
//}



// 指针
/*
1. 指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
2. 指针的大小是固定的4/8个字节（32位平台/64位平台）。
3. 指针是有类型，指针的类型决定了指针的+-整数的步长，指针解引用操作的时候的权限。
4. 指针的运算。
*/

// 
//


#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'a';
//	printf("%c\n", *p);
//	return 0;
//}
//int main()
//{
//	const char* pstr = "hello world.";//这里是把一个字符串放到pstr指针变量里了吗？
//	printf("%s\n", pstr);
//	return 0;
//}
// 
// 把字符串 字符h的地址，赋值给了pstr
// 
// 
// 

//int main()
//{
//	char str1[] = "hello xx.";
//	char str2[] = "hello xx.";
//
//	const char* str3 = "hello xx.";
//	const char* str4 = "hello xx.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


/*
指针数组：
int *p1[10];
int (*p2)[10];
p1, p2分别是什么？

int *p1[10];
p1先和[]结合，说明他是一个数组，[10]，说明元素10个元素，每个元素的类型是 int*
int (*p2)[10];
p1先和* 结合，说明他是一个指针，[] 说明他指向一个数组，[10] 说明数组内有10个元素，int 说明每个元素的类型是int

*/


/*
再谈 数组名 和 &数组名
*/
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr+1= %p\n", &arr + 1);
//	return 0;
//	return 0;
//}
/*
数组名称通常表示的是首元素地址
但是有两个例外：
1.sizeof(数组名) ： 这里的数组名必须是一个单独的数组名
sizeof(arr+0),不算是一个单独的数组名
这个的数组名表示整个数组， 计算的是整个数组的大小
2.&数组名
这里的数组名仍然表示的整个数组，所以&数组名取出的是整个数组的地址

*/


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//int (*p1)[10] = &arr;
//	int (*p1)[sizeof(arr) / sizeof(arr[0])] = &arr;
//
//	// arr 的类型是 int [10]
//	// 那为什么 p1 这样定义不报错呢？
//	return 0;
//}



/*
int arr[5];
int *parr1[10];
int (*parr2)[10];
int (*parr3[10])[5];
parr3先和[]结合，说明他是一个数组，之后[10]，说明这个数组内有10个元素,之后和*结合,说明元素类型是指针，之后[]，说明元素是指针数组
[5]，说明每个指针数组内5个元素，每个元素类型是int


parr3是一个存放数组指针的数组，
or
parr3先和[10]结合，说明他是一个数组，对于一个数组，parr3是他的数组名[10]是他的元素个数，把这一部分拿走，剩下的是他的元素类型
int (*)[5] 数组指针
*/



/*
数组参数、指针参数
*/
// 一维数组传参
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

// 二维数组传参
//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok？// 二维数组数组名表示的是首元素的地址，其实就是第一行的地址
//{}
//void test(int* arr[5])//ok？  // 这里需要一个指针，形参是一个数组
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int** arr)//ok？ // 二维数组的数组名是首个一维数组的地址，二级指针是用来存放一级指针的地址的，所以不行
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


// 一级指针传参
//
//
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}



/*
函数指针：指向函数的指针
与
数组指针类比：指向数组的指针


一个问题：数组指针存数组，是因为数组在内存中是有空间的，但是函数，他只有在调用的使用才创建函数栈帧，那这个指针在不调用函数的时候不就是野指针了吗？
函数和全局变量是一样的，都是写好之后就有地址
*/
int add(int a, int b)
{
	return a + b;
}
int main()
{
	//printf("%p\n", &add);
	//printf("%p\n", add);
	int (*padd)(int, int) = add;
	printf("%d\n", padd(2, 3));
	return 0;
}
/*
在C语言中，如果函数名出现在表达式中，它会自动转换为指向该函数的指针。因此，在赋值给函数指针时，我们不需要使用取地址操作符& 来获取函数的地址。

当我们写 operation = add; 时，编译器会将 add 函数自动转换为指向该函数的指针，并将其赋值给 operation。



在 C 语言中，函数指针可以像函数一样进行调用，无需解引用。函数指针名就像函数名一样，用于表示函数的入口点地址，因此可以直接使用函数指针来进行函数调用操作。

所以，当你使用 padd(2, 3) 调用 padd 时，它会自动解析为调用 add(2, 3)，并返回计算结果。无需显式解引用函数指针。
*/