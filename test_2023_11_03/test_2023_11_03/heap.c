#include "heap.h"

static void Swap(heapDataType* p1, heapDataType* p2)
{
	heapDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

// 前提：左右子树都是大(小)堆
void ADjustDown(heapDataType* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;

	while (child < n)
	{
		// 假设默认认为左孩子小
		if (child + 1 < n && a[child + 1] < a[child])
		{
			++child;// 如果右孩子比左孩子还小，让index到右孩子
		}
		// 如果孩子小于父亲，交换
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapInit(heap* php, heapDataType* a, int n)
{
	php->_a = (heapDataType*)malloc(sizeof(heapDataType) * n);
	if (a == NULL)
	{
		// ...
		exit(-1);
	}
	memcpy(php->_a, a, sizeof(heapDataType) * n);
	php->_size = n;
	php->_capacity = n;
	// 构建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		ADjustDown(php->_a, php->_size, i);
	}
}

void HeapDestory(heap* php)
{

}
void HeapPush(heap* php);
void HeapPop(heap* php);
heapDataType HeapTop(heap* php);