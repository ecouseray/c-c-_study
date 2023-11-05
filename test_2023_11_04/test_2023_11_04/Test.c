//#include "Heap.h"


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


//int main()
//{
//	int arr[] = { 27,15,19,18,28,34,65 };
//	//HeapSort(arr, sizeof(arr) / sizeof(int));
//
//	heap hp;
//	HeapInit(&hp, arr, (sizeof(arr) / sizeof(arr[0])));
//
//	HeapPush(&hp, 13);
//	HeapDestory(&hp);
//	return 0;
//}

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

void Swap(int* buf1, int* buf2)
{
	int tmp = *buf1;
	*buf1 = *buf2;
	*buf2 = tmp;
}


// ������µ������������ڵ������
void ADjustDown1(int* arr, int sz, int root) 
// ��������Ĳ�������Ҫ�����Ķ�(����)���ѵĴ�С����Ҫ�����Ľڵ�
{
	int parent = root;
	int maxChild = parent * 2 + 1; // ����Ԥ���趨�����ڵ�������ǽϴ�Ľڵ�
	while (maxChild < sz)
	{
		if (maxChild + 1 < sz && arr[maxChild + 1] > arr[maxChild])
		{
			++maxChild;
		}
		if (arr[maxChild] > arr[parent])
		{
			Swap(&arr[maxChild], &arr[parent]);
			parent = maxChild;
			maxChild = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// ������µ������������ڵ���С��
void ADjustDown2() 
// ��������Ĳ�������Ҫ�����Ķ�(����)���ѵĴ�С����Ҫ�����Ľڵ�
{

}

int main()
{
	// ʵ�飺
	int arr1[] = { 55,70,90,40,30,60,41 }; // ����һ����ѣ���ͷ�ڵ㲻����
	int arr2[] = { 27,15,19,18,28,34,65 }; // ����һ��С�ѣ���ͷ�ڵ㲻����
	// ����������(����)������Ҫ���µ���һ�£�����Թ��ɶ�
	ADjustDown1(arr1, sizeof(arr1) / sizeof(arr1[0]), 0);
	return 0;
}