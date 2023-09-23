#define _CRT_SECURE_NO_WARNINGS 


//#include <stdio.h>
//
//int main() {
//
//	char ch = 0;
//	//while (scanf("%c", &ch) != EOF)
//		printf("%d\n", ch);
//	return 0;
//}
//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int num = 10;
//	int* pnum = &num;
//	int intarr[10] = { num };
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//	// parr 是一种指针， 指向一个数组，数组内10个元素，每个元素的类型是int
//
//	int (*(pparr[5]))[10] = { parr };
//	
//	// pparr 是一个数组，数组内5个元素，每个元素的类型是一个指针，该指针指向一个数组，数组内10个元素，每个元素的类型是int
//	// 像 26 行这样的比较复杂的类型，在书写的时候可以在他的之前的基础上改
//	// int(*parr)[10] = &arr;
//	// int(*parr[5])[10] = &arr;
//	// int(*(parr[5]))[10] = { parr }; 写好就是这样
//	// 去掉 数组名 和 数组元素个数，剩下的就是 数组元素的类型
//	// int(*)[10] = { parr };  元素是指针，指针指向一个数组，数组内10个元素，每个元素是int 类型
//	// (parr[5])
//	// 又因为在不加 () 的时候，名称先和 [] 结合, 再和 * 结合
//	// 
//	// int (*parr3[10])[5];
//	// 
//	
//	
//	// 函数指针
//	int(*padd)(int, int) = &add;
//
//	// 不能使用函数数组
//
//	// 函数指针数组
//	int (*ppfunc[10])(int, int) = { padd };
//
//
//	printf("%d\n", ppfunc[0](2, 4));
//
//	return 0;
//}
//
//
//void test()
//{
//	int a = 10;
//	int* p = &a;
//	int* arr[10] = { p };
//}



// qsort 模拟实现
/*

void qsort( void *buf, size_t num, size_t size, int (*compare)(const void *, const void *) );

*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Stu 
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_by_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_by_struct_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_by_struct_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//
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
//
//void bubble_sort(void* buf, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)buf + j * width, (char*)buf + (j + 1) * width) > 0)
//			{
//				Swap((char*)buf + j * width, (char*)buf + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//
//}
//
//// int (*cmp)(const void* e1, const void* e2)
//
//
//void test()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_by_int);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%d ", arr[i]);
//}
//
//void test1()
//{
//	struct Stu stuArr[] = { {"zhangsan", 18} ,{"lisi", 20}, {"wangwu", 25} };
//	bubble_sort(stuArr, sizeof(stuArr) / sizeof(stuArr[0]), sizeof(stuArr[0]), cmp_by_struct_age);
//	for (int i = 0; i < sizeof(stuArr) / sizeof(stuArr[0]); i++)
//	{
//		printf("%s, %d\n", stuArr[i].name , stuArr[i].age);
//	}
//}
//
//
//void test2()
//{
//	struct Stu stuArr[] = { {"zhangsan", 18} ,{"lisi", 20}, {"wangwu", 25} };
//	bubble_sort(stuArr, sizeof(stuArr) / sizeof(stuArr[0]), sizeof(stuArr[0]), cmp_by_struct_name);
//	for (int i = 0; i < sizeof(stuArr) / sizeof(stuArr[0]); i++)
//	{
//		printf("%s, %d\n", stuArr[i].name, stuArr[i].age);
//	}
//}
//int main()
//{
//	//test();
//	//test1();
//	//test2();
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//
//	}
//	if (left >= right)
//		printf("找不到\n");
//	return 0;
//}

