#include "List.h"

// 链表一共有8种类型
// 最常用的是：不带头单向不循环链表  
// （1.oj题、
//	 2.基本不会单独作为链表使用
//	 3.其他数据结构的一部分：图、哈希表）
// 
//  带头双向循环链表
//  头节点的prev指向尾节点，尾节点的next指向头节点、
//  stl 中的链表就是上面的类型

// 特点：结构复杂，操作简单？
// 链表为空的时候，自己的两个指针指向自己


void test01()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	// phead = ListInit(phead);
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);
	ListPushBack(phead, 5);

	ListPrint(phead);

	ListPopBack(phead);
	ListPopBack(phead);
	//ListPopBack(phead);
	//ListPopBack(phead);
	//ListPopBack(phead);
	//ListPopBack(phead);

	ListPushFront(phead, 5);
	ListPrint(phead); 
	ListPopFront(phead);

	ListPrint(phead);
}


int main()
{
	test01();
	return 0;
}