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
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	//printf("%p\n", &add);
//	//printf("%p\n", add);
//	int (*padd)(int, int) = add;
// 
//	printf("%d\n", padd(2, 3));
//	printf("%d\n", （*padd）(2, 3));
//	return 0;
//}
/*
在C语言中，如果函数名出现在表达式中，它会自动转换为指向该函数的指针。因此，在赋值给函数指针时，我们不需要使用取地址操作符& 来获取函数的地址。

当我们写 operation = add; 时，编译器会将 add 函数自动转换为指向该函数的指针，并将其赋值给 operation。



在 C 语言中，函数指针可以像函数一样进行调用，无需解引用。函数指针名就像函数名一样，用于表示函数的入口点地址，因此可以直接使用函数指针来进行函数调用操作。

所以，当你使用 padd(2, 3) 调用 padd 时，它会自动解析为调用 add(2, 3)，并返回计算结果。无需显式解引用函数指针。
*/


////代码1
//(*(void (*)())0)();
////代码2
//void (*signal(int, void(*)(int)))(int);

//int main()
//{
//	(*(void (*)())0)();
//	//void (*)()  函数指针
//	//()将 0 强转为 函数指针
//	//* 对函数指针解引用 之后调用
//	//调用 0 地址 处 的 函数
//	return 0;
//}


//	int (*padd)(int, int) = add;
//                              函数指针类型
//typedef void(*pf_t)(int); //把void(*)(int)类型重命名为pf_t
//int main()
//{
//	void (*signal(int, void(*)(int)))(int);
//// 这里是一次函数的声明， 声明的signal函数的第一个参数的类型是int,第二个参数的类型是函数指针，该函数指针指向的函数，函数参数是int，返回值是void
//// signal 函数的返回类型也是一个函数指针，该函数指针所指向的函数，函数参数是int，返回类型是void
//
//	pf_t signal(int, pf_t);
//
//	return 0;
//}




// 因为感觉之前使用函数指针都是脱裤子放屁，没有必要啊
// 所以
// 
// 函数指针的实际应用

//void menu()
//{
//	printf("*****************************\n");
//	printf("****   1. add   2. sub  *****\n");
//	printf("****   3. mul   4. div  *****\n");
//	printf("****   0. exit          *****\n");
//	printf("*****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////
////计算
////回调函数
////
//
//void calc(int (*pf)(int , int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("请输入2个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int main()
//{
//	//int (*pf_add)(int, int) = add;
//
//	int (*pf_add)(int, int) = add;
//
//	int (*(arr_p_f[4]))(int, int) = { add, sub, mul };
//
//	int (*arr_p_f1[4])(int, int) = { add, sub, mul };
//
//	return 0;
//}




//x&y
//x^y
//x|y
//x&&y
//x||y
//x>>y
//x<<y
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****   1. add   2. sub  *****\n");
//	printf("****   3. mul   4. div  *****\n");
//	printf("****   0. exit          *****\n");
//	printf("*****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//函数指针的数组
//	//转移表
//	int (*pfArr[])(int, int) = {0, Add, Sub, Mul,  Div};
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//	} while (input);
//
//	return 0;
//}




// 指向函数指针数组的指针

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul,  Div };
//
//	int (*(*pfArrP)[5]) (int, int) = &pfArr;
//
//
//
//	int(*(*pfArrP)[5]) (int, int) = &pfArr;
//
//
//	return 0;
//}



/*

回调函数

回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个
函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数
的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进
行响应。

*/

//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//			flag = 0;
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0, 2, 4, 6, 8, 10, 1,3,5,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//
//	return 0;
//}









//qsort

//qsort -这个函数可以排序任意类型的数据
//

//void qsort(void* base,//你要排序的数据的起始位置
//	       size_t num,//待排序的数据元素的个数
//	       size_t width,//待排序的数据元素的大小（单位是字节）
//	       int(* cmp)(const void* e1, const void* e2)//函数指针-比较函数
//          );
//__cdecl - 函数调用约定

// qsort 返回值 >0 =0 <0
// qsort 默认升序，要想降序，处理cmp函数中的两个元素，使其相反


#include <stdlib.h>

//比较2个整型元素
//e1指向一个整数
//e2指向另外一个整数

//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void test1()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//0 1 2 3 4 5 6 7 8 9
//	//把数组排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	int a = 10;
//	//char* pa = &a;//int*
//	void* pv = &a;//void*是无具体类型的指针，可以接受任意类型的地址
//	//void*是无具体类型的指针，所以不能解引用操作，也不能+-整数
//	//
//	return 0;
//}
//





void bubble_sort(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			flag = 0;
		}
		if (flag == 1)
			break;
	}
}


//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组是排好序
		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

//void qsort(void* base,//你要排序的数据的起始位置
//	       size_t num,//待排序的数据元素的个数
//	       size_t width,//待排序的数据元素的大小（单位是字节）
//	       int(* cmp)(const void* e1, const void* e2)//函数指针-比较函数
//          );
//__cdecl - 函数调用约定


// qsort 作者 不知道 未来使用这个qsort函数比较的人，需要比较的数据是什么类型的
// 
// 泛型

// 既然不知道是什么类型的， 传 width，和 元素个数 就能找到之后 操作数据了