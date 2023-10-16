/*

顺序表：
	1.可以动态增长的数组
	2.数据在数组中存储必须是连续的

	缺点：
		1.中间或者头部的插入删除很慢，需要挪动数据，时间复杂度是O(N)
		2.空间不够时，增容会有一定消耗和空间浪费

	优点：
		1.随机访问
		2.缓存命中率比较高（与链表相比）
			CPU    寄存器    三级缓存(L1、L2、L3)    内存
							越往左边速度越快，价格越贵
		将数组从内存中读到三级缓存中，CPU在缓存中如果根据地址找到所对应的值，就叫缓存命中
		缓存在访问一个数据的时候就进行预加载，而是加载这个数据开始的一段数据到缓存

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