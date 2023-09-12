#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//	int arr1[3][4];
//	int arr2[] = { 1,2,3 };
//	int arr3[][4] = { 1,2,3 };
//	return 0;
//}
// 可以将二维数组的理解成 一维数组的数组

// 数组的越界访问


// 冒泡排序
// 两个相邻的元素进行比较
// void bubble_sort(int arr[])
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,7,6,5,3,2,1,4,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}


// 数组名是什么？
// 

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

// 数组名确实能表示首元素的地址
// 但是有两个例外：
// 1.sizeof(数字名)，这里的数组名称表示整个数组，计算的是整个数组的大小，单位是字节
// 2.&数组名，这里的数组名表示的也是整个数组，取出的是整个数组的地址
// 2.证明：&arr + 1 ，步长为整个数组的大小
//   并且这里如果他任然是一个地址，那么对一个地址取地址是在干什么？
//
//
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("-----------------------------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("-----------------------------\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	
//	return 0;
//}

// 一个问题：现在知道了，数组名是首元素的地址，所以不能在函数里面求数组的元素个数
// 那为什么字符串（字符数组）可以在函数里边求字符串长度
// 因为strlen()这样的库函数，在内存中是在找'\0'，所以拿到字符串地址，从这个位置向后查找就可以计算出字符串的长度


//int main()
//{
//	int arr[3][4];
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//	// 二维数组的数组名也表示二维数组的首元素地址
//	// 注意：表示的不是arr[0][0]的地址
//	// 表示的是 第一行的地址
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("-----------------------------\n");
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//	return 0;
//}

