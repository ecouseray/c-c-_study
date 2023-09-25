#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//	return 0;
//}

// 指针 +1 -1，之取决与自己的类型

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4,2000000
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}



//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}


//
//int main()
//{
//	char* c[] = { "enter","new","point","first" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}







//int main()
//{
//	int arr1[10] = { 0 };
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//		arr1[i] = i;
//
//	int arr2[5][10] = { 0 };
//	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++);
//		for (int j = 0; j < sizeof(arr2[0]) / sizeof(arr2[0][0]); j++)
//			
//	return 0;
//}


// 字符串——字符串函数
/*
求字符串长度
strlen
	返回类型是 size_t 无符号整形	
长度不受限制的字符串函数
strcpy
strcat
strcmp
长度受限制的字符串函数介绍
strncpy
strncat
strncmp
字符串查找
strstr
strtok
错误信息报告
strerror
字符操作
内存操作函数
memcpy
memmove
memset
memcmp

*/


// 模拟实现strlen()
//#include <assert.h>
//size_t myStrlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (++count, *str++);
//	return --count; 
//}
//size_t myStrlen(const char* str)
//{
//	assert(str);
//	char* str1 = str;
//	while (*str1++);
//	return --str1 - str;
//}
//int myStrlen(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + myStrlen(str + 1);
//}
//int main()
//{
//	char str[] = "abcdef";
//	printf("%d\n", myStrlen(str));
//	return 0;
//}


/*

	char name[] = { 0 };
	name = "zhangsan";
	// err name是数组名首地址，是地址，地址是一个常量，不能被赋值
	strcpy 拷贝'\0'之前的元素
	源字符串中要有'\0'
	目标空间也要足够大，并且可修改

	char* p = "abcdef";
	char arr[] = "bit";
	strcpy(p, arr);
	p指向的空间不可修改
*/

/*
模拟实现以下库函数
strcpy
strcat
strcmp
*/
#include <assert.h>
//char* myStrcpy(char* str, const char* arr)
//{
//	assert(str);
//	assert(arr);
//	char* str1 = str;
//	while (*arr != '\0')
//	{
//		*str1 = *arr;
//		str1++, arr++;
//	}
//	*str1 = *arr;
//	return *str;
//}
//char* myStrcpy(char* str, const char* arr)
//{
//	assert(str);
//	assert(arr);
//	char* str1 = str;
//	while (*str1++ = *arr++);
//	return *str;
//}
//int main()
//{
//	char arr[] = "ab";
//	char str[64] = { 0 };
//	myStrcpy(str, arr);
//	printf("%s\n", str);
//	return 0;
//}

//myStrcat
//char* myStrcat(char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//
//	char* pstr1 = str1;
//	while (*pstr1 != '\0')
//		pstr1++;
//	while (*pstr1++ = *str2++);
//	return str1;
//}
//
//int main()
//{
//	char str1[100] = "abc";
//	char str2[] = "def";
//	printf("%s\n", myStrcat(str1, str2));
//	return 0;
//}


// strcmp

int myStrcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1++ == *str2++ && *str1 != '\0');
	return *str1 - *str2;
}
int main()
{
	char str1[] = "abc";
	char str2[] = "abcd";
	printf("%d\n", myStrcmp(str1, str2));

	return 0;
}