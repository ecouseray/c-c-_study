#define _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>


//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++, buf2++;
//	}
//}
//
//
//void bubbleSort(void* base, int num, int width, int cmp(void*, void*))
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp(((char*)base + j * width), ((char*)base + (j + 1) * width)) > 0)
//			{
//				swap(((char*)base + j * width), ((char*)base + (j + 1) * width), width);
//
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//			break;
//	}
//}
//
//
//int cmpByInt(void* buf1, void* buf2)
//{
//	return *(int*)buf2 - *(int*)buf1;
//}
//
//
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	bubbleSort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmpByInt);
//
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



/*
ͨѶ¼
����
�Ա�
����
�绰
��ַ
1.���100���˵���Ϣ
2.������ϵ��
3.ɾ����ϵ��
4.������ϵ��
5.�޸���ϵ��
6.����
7.��ʾ��ϵ��
*/
