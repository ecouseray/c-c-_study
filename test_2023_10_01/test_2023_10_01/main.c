#define _CRT_SECURE_NO_WARNINGS 


/*

常见的动态管理的错误：
1.对NULL指针的解引用操作

*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}


/*

常见的动态管理的错误：
2.对动态开辟空间的越界访问

*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	//int* p = (int*)malloc(INT_MAX);
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	// 越界访问
//
//	free(p);
//	p = NULL;
//	return 0;
//}


/*

常见的动态管理的错误：
3.对非动态申请空间的free操作

*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	//int* p = (int*)malloc(INT_MAX);
//	int* p = (int*)malloc(40);
//	int a = 10;
//	int* ptr = &a;
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	// 越界访问
//
//	free(p);
//	p = NULL;
//	return 0;
//}




/*

常见的动态管理的错误：
4.使用free释放一块动态开辟内存的一部分

*/
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//		//p[i];
//		//*(p + i);
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


/*

常见的动态管理的错误：
5.对同一块内存的多次释放

*/

//int main()
//{
//	int* p = (int*)malloc(40);
//	// ...
//	free(p);
//	// ...
//	free(p);
//	return 0;
//}



/*

常见的动态管理的错误：
6.动态开辟内存忘记释放（内存泄露）

*/

#include <stdio.h>

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
// ?
// str在调用GetMemory，传值调用，首先会有内存泄漏，其次str中的值仍然是NULL；对其解引用程序会崩溃


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
// ?
// p指向的空间，在出了GetMemory之后，就已经被销毁了，但是后面仍然向printf中传入str（也就是p），会输出随机字符串.


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
// ? 
// 内存泄露

