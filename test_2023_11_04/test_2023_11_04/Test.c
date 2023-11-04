#include "Heap.h"


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