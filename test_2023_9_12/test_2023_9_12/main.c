#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//	int arr1[3][4];
//	int arr2[] = { 1,2,3 };
//	int arr3[][4] = { 1,2,3 };
//	return 0;
//}
// ���Խ���ά��������� һά���������

// �����Խ�����


// ð������
// �������ڵ�Ԫ�ؽ��бȽ�
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


// ��������ʲô��
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

// ������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
// �������������⣺
// 1.sizeof(������)��������������Ʊ�ʾ�������飬���������������Ĵ�С����λ���ֽ�
// 2.&���������������������ʾ��Ҳ���������飬ȡ��������������ĵ�ַ
// 2.֤����&arr + 1 ������Ϊ��������Ĵ�С
//   ���������������Ȼ��һ����ַ����ô��һ����ַȡ��ַ���ڸ�ʲô��
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

// һ�����⣺����֪���ˣ�����������Ԫ�صĵ�ַ�����Բ����ں��������������Ԫ�ظ���
// ��Ϊʲô�ַ������ַ����飩�����ں���������ַ�������
// ��Ϊstrlen()�����Ŀ⺯�������ڴ���������'\0'�������õ��ַ�����ַ�������λ�������ҾͿ��Լ�����ַ����ĳ���


//int main()
//{
//	int arr[3][4];
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//	// ��ά�����������Ҳ��ʾ��ά�������Ԫ�ص�ַ
//	// ע�⣺��ʾ�Ĳ���arr[0][0]�ĵ�ַ
//	// ��ʾ���� ��һ�еĵ�ַ
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("-----------------------------\n");
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//	return 0;
//}

