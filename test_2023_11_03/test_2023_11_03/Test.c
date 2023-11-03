/*

二叉树399个节点，度为2的节点个数199，该树的叶子节点是？
	n0 = n2 + 1 = 200

完全二叉树 -- 顺序存储 -- 数组

父亲：i 左孩子 2 * i + 1, 右孩子 2 * i + 2
孩子：i 父亲 (i - 1) / 2

二叉链 -- 三叉链

堆 -- 大堆 -- 小堆 -- heap

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
	// 左右子树是小堆，但是根节点不满足 
	// 可以使用向下调整算法
	heap hp;
	HeapInit(&hp, arr, (sizeof(arr) / sizeof(arr[0])));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}