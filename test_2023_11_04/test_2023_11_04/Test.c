#include "Heap.h"


void HeapSort(int* a, int n)
{
	//for (int i = n - 1; i >= 0; --i)
	// ����
	for (int i = ((n - 1) - 1) / 2; i >= 0; --i)
	{
		ADjustDown(a, n, i);
	}
	// ���������򣨴�� -- ���� С�� -- ����
	int end = n - 1;
	while (end > 0)
	{
		// ��һ��Ԫ�ػ������
		Swap(&a[0], &a[end]);
		// �����µ���,ѡ��С��
		ADjustDown(a, end, 0);
		--end;
	}
}


int main()
{
	int arr[] = { 27,15,19,18,28,34,65,49,25,37 };
	//HeapSort(arr, sizeof(arr) / sizeof(int));

	heap hp;
	HeapInit(&hp, arr, (sizeof(arr) / sizeof(arr[0])));

	HeapPush(&hp, 13);
	HeapDestory(&hp);
	return 0;
}

/*

��ȫ��������n������ڵ㣺2^n - 1

���� i ���� 2*i+1  �Һ��� 2*i+2
���� i ���� (i-1)/2

������Ӵ���״��ڵ��ں��ӵ� -- ���
�������и���С�ڵ��ں��ӵ� -- С��

���齨�ѣ���Ҫ���������µ����㷨 -- ���µ����㷨��ǰ��
								С�ѵģ�����������������������С��
								��ѵģ����������������������Ǵ��
�ѵ��߼��ṹ��һ����ȫ������������ṹ�ʺ�ʹ������洢

*/