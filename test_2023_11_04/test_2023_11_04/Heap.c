#include "heap.h"

void Swap(heapDataType* p1, heapDataType* p2)
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
		// 假设默认认为左孩子小；如果这个堆没有右节点，会越界，所以要判断child+1<n
		if (child + 1 < n && a[child + 1] > a[child])
		{
			++child;// 如果右孩子比左孩子还小，让index到右孩子
		}
		// 如果孩子小于父亲，交换
		if (a[child] > a[parent])
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

void ADjustUp(heapDataType* a, int n, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}

	//while (child < n)
	//{
	//	// 假设默认认为左孩子小；如果这个堆没有右节点，会越界，所以要判断child+1<n
	//	if (child + 1 < n && a[child + 1] > a[child])
	//	{
	//		++child;// 如果右孩子比左孩子还小，让index到右孩子
	//	}
	//	// 如果孩子小于父亲，交换
	//	if (a[child] > a[parent])
	//	{
	//		Swap(&a[child], &a[parent]);
	//		parent = child;
	//		child = parent * 2 + 1;
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}
}

void HeapInit(heap* php, heapDataType* a, int n)
{
	php->_a = (heapDataType*)malloc(sizeof(heapDataType) * n);
	if (php->_a == NULL)
	{
		// ...
		exit(-1);
	}
	memcpy(php->_a, a, sizeof(heapDataType) * n);
	php->_size = n;
	php->_capacity = n;
	// 构建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{// (n - 1)数组最后一个元素，
	 // ((n-1) - 1) / 2 最后一个节点的父亲节点
		ADjustDown(php->_a, php->_size, i);
	}
}

void HeapDestory(heap* php)
{
	assert(php);
	free(php->_a);
	php->_capacity = php->_size = 0;
}
void HeapPush(heap* php, heapDataType x)
{
	assert(php);
	if (php->_size == php->_capacity)
	{
		php->_capacity *= 2;
		heapDataType* tmp = (heapDataType*)realloc(php->_a, sizeof(heapDataType) * php->_capacity);
		php->_a = tmp;
	}
	php->_a[php->_size++] = x;
	ADjustUp(php->_a, php->_size, php->_size - 1);
}
void HeapPop(heap* php)
{
	assert(php);
	assert(php->_size  > 0);

	Swap(&php->_a[0], &php->_a[php->_size - 1]);
	php->_size--;

	ADjustDown(php->_a, php->_size, 0);
}
heapDataType HeapTop(heap* php)
{


}