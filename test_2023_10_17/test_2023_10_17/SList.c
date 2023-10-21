#include "SList.h"

static SListNode* creatNewNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
		exit(-1);
	newNode->a = x;
	newNode->next = NULL;
	return newNode;
}

void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = creatNewNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}

void SListPrint(SListNode* phead)
{
	SListNode* tail = phead;
	while (tail != NULL)
	{
		printf("%d->", tail->a);
		tail = tail->next;
	}
	printf("NULL\n");
}

void SListPopBack(SListNode** pphead)
{
	if (*pphead == NULL)
	{
		printf("此链表为空，无元素可删除\n");
		exit(-1);
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SListNode* tail = *pphead;
		SListNode* prve = *pphead;
		while (tail->next != NULL)
		{
			prve = tail;
			tail = tail->next;
		}
		prve->next = NULL;
		free(tail);
		
	}
}


//void SListPushBack(SListNode* phead, SListDataType x)
//{
//	SListNode* newNode = creatNewNode(x);
//	if (phead == NULL)
//	{
//		phead = newNode;
//	}
//	else
//	{
//		SListNode* tail = phead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//		tail->next = newNode;
//	}
//}

//void SListPopBack(SListNode** pphead)
//{
//	assert(pphead);
//
//	// 温柔的检查
//	if (*pphead == NULL)
//	{
//		return;
//	}
//
//	// 暴力检查
//	//assert(*pphead != NULL);
//
//
//	// 1、一个节点
//	// 2、多个节点
//	if ((*pphead)->next == NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else
//	{
//		// 找尾
//		SListNode* prev = NULL;
//		SListNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			prev = tail;
//			tail = tail->next;
//		}
//
//		prev->next = NULL;
//		free(tail);
//		tail = NULL;
//
//		//SLTNode* tail = *pphead;
//		//while (tail->next->next != NULL)
//		//{
//		//	tail = tail->next;
//		//}
//
//		//free(tail->next);
//		//tail->next = NULL;
//	}
//}

//SListNode* BuySLTNode(SListDataType x)
//{
//	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
//	if (newnode == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//	newnode->a = x;
//	newnode->next = NULL;
//
//	return newnode;
//}
//void SListPushBack(SListNode** pphead, SListDataType x)
//{
//	assert(pphead);
//
//	SListNode* newnode = BuySLTNode(x);
//
//	// 1、空
//	// 2、非空
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//	else
//	{
//		// 找尾
//		SListNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//
//		tail->next = newnode;
//	}
//}