/*

˳���
	1.���Զ�̬����������
	2.�����������д洢������������

	ȱ�㣺
		1.�м����ͷ���Ĳ���ɾ����������ҪŲ�����ݣ�ʱ�临�Ӷ���O(N)
		2.�ռ䲻��ʱ�����ݻ���һ�����ĺͿռ��˷�

	�ŵ㣺
		1.�������
		2.���������ʱȽϸߣ���������ȣ�
			CPU    �Ĵ���    ��������(L1��L2��L3)    �ڴ�
							Խ������ٶ�Խ�죬�۸�Խ��
		��������ڴ��ж������������У�CPU�ڻ�����������ݵ�ַ�ҵ�����Ӧ��ֵ���ͽл�������
		�����ڷ���һ�����ݵ�ʱ��ͽ���Ԥ���أ����Ǽ���������ݿ�ʼ��һ�����ݵ�����

*/


#include "SList.h"

int main(void)
{
	SListNode* pSlist = NULL;
	SListPushBack(&pSlist, 1);
	SListPushBack(&pSlist, 2);
	SListPushBack(&pSlist, 3);
	SListPrint(pSlist);

	SListPopFront(&pSlist);

	//SListPopBack(&pSlist);
	//SListPopBack(&pSlist);
	//SListPopBack(&pSlist);
	return 0;
}
























































































//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	while (left <= right)
//	{
//		int mid = left + ((right - left) >> 1);
//		//int mid = (left + right) / 2;
//		if (arr[mid] == key)
//		{
//			printf("%d\n", mid);
//			break;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	if (left > right)
//		printf("%d\n", -1);
//	return 0;
//}