//#include "Heap.h"


void HeapSort(int* a, int n)
{
	//for (int i = n - 1; i >= 0; --i)
	// 建堆
	for (int i = ((n - 1) - 1) / 2; i >= 0; --i)
	{
		ADjustDown(a, n, i);
	}
	// 真正的排序（大堆 -- 降序、 小堆 -- 升序）
	int end = n - 1;
	while (end > 0)
	{
		// 第一个元素换到最后
		Swap(&a[0], &a[end]);
		// 再向下调整,选次小的
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

完全二叉树：n层的最多节点：2^n - 1

父亲 i 左孩子 2*i+1  右孩子 2*i+2
孩子 i 父亲 (i-1)/2

树中所哟父亲大于等于孩子的 -- 大堆
书中所有父亲小于等于孩子的 -- 小堆

数组建堆，主要依赖：向下调整算法 -- 向下调整算法的前提
								小堆的：调整的树的左右子树都是小堆
								大堆的：调整的树的左右子树都是大堆
堆的逻辑结构是一个完全二叉树，物理结构适合使用数组存储

*/

void Swap(int* buf1, int* buf2)
{
	int tmp = *buf1;
	*buf1 = *buf2;
	*buf2 = tmp;
}


// 这个向下调整函数，用于调整大堆
void ADjustDown1(int* arr, int sz, int root) 
// 这个函数的参数：需要调整的堆(数组)，堆的大小，需要调整的节点
{
	int parent = root;
	int maxChild = parent * 2 + 1; // 这里预先设定被调节点的左孩子是较大的节点
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

// 这个向下调整函数，用于调整小堆
void ADjustDown2() 
// 这个函数的参数：需要调整的堆(数组)，堆的大小，需要调整的节点
{

}

int main()
{
	// 实验：
	int arr1[] = { 55,70,90,40,30,60,41 }; // 这是一个大堆，但头节点不合适
	int arr2[] = { 27,15,19,18,28,34,65 }; // 这是一个小堆，但头节点不合适
	// 上面两个堆(数组)，皆需要向下调整一下，便可以构成堆
	ADjustDown1(arr1, sizeof(arr1) / sizeof(arr1[0]), 0);
	return 0;
}