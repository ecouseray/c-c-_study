/*

������399���ڵ㣬��Ϊ2�Ľڵ����199��������Ҷ�ӽڵ��ǣ�
	n0 = n2 + 1 = 200

��ȫ������ -- ˳��洢 -- ����

���ף�i ���� 2 * i + 1, �Һ��� 2 * i + 2
���ӣ�i ���� (i - 1) / 2

������ -- ������

�� -- ��� -- С�� -- heap

*/




//int main()
//{
//	while (1)
//	{
//
//	}
//	return 0;
//}


#include "heap.h"


int main()
{
	int arr[] = { 27,15,19,18,28,34,65,49,25,37 };
	// ����������С�ѣ����Ǹ��ڵ㲻���� 
	// ����ʹ�����µ����㷨
	heap hp;
	HeapInit(&hp, arr, (sizeof(arr) / sizeof(arr[0])));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}