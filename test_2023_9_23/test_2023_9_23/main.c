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
//	// parr ��һ��ָ�룬 ָ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int
//
//	int (*(pparr[5]))[10] = { parr };
//	
//	// pparr ��һ�����飬������5��Ԫ�أ�ÿ��Ԫ�ص�������һ��ָ�룬��ָ��ָ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int
//	// �� 26 �������ıȽϸ��ӵ����ͣ�����д��ʱ�����������֮ǰ�Ļ����ϸ�
//	// int(*parr)[10] = &arr;
//	// int(*parr[5])[10] = &arr;
//	// int(*(parr[5]))[10] = { parr }; д�þ�������
//	// ȥ�� ������ �� ����Ԫ�ظ�����ʣ�µľ��� ����Ԫ�ص�����
//	// int(*)[10] = { parr };  Ԫ����ָ�룬ָ��ָ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ����int ����
//	// (parr[5])
//	// ����Ϊ�ڲ��� () ��ʱ�������Ⱥ� [] ���, �ٺ� * ���
//	// 
//	// int (*parr3[10])[5];
//	// 
//	
//	
//	// ����ָ��
//	int(*padd)(int, int) = &add;
//
//	// ����ʹ�ú�������
//
//	// ����ָ������
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



// qsort ģ��ʵ��
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
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//
//	}
//	if (left >= right)
//		printf("�Ҳ���\n");
//	return 0;
//}

