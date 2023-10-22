#include "SList.h"


// 单链表打印
void SListPrint(SListNode* plist)
{
	while (plist != NULL)
	{
		printf("%d->", plist->data);
		plist = plist->next;
	}
	printf("NULL\n");
}

static SListNode* creatNewNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		perror("malloc");
		return NULL;
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
// 单链表尾插
void SListPushBack(SListNode** pplist, SListDataType x)
{
	assert(pplist);
	SListNode* newNode = creatNewNode(x);
	if (*pplist == NULL)
	{
		*pplist = newNode;
	}
	else
	{
		SListNode* cur = *pplist;
		while ((cur->next) != NULL)
		{
			cur = cur->next;
		}
		// 在这个地方 cur 指针就指向了 plist 链表的最后一个元素
		cur->next = newNode;
	}
}
// 单链表的头插
void SListPushFront(SListNode** pplist, SListDataType x)
{
	assert(pplist);
	SListNode* newNode = creatNewNode(x);
	if (*pplist == NULL)
	{
		*pplist = newNode;
	}
	else
	{
		newNode->next = *pplist;
		*pplist = newNode;
	}
}
// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		printf("此链表为空链表，无元素可删除\n");
		return;
	}
	else if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode* prve = NULL;
		SListNode* cur = *pplist;
		while (cur->next != NULL)
		{
			prve = cur;
			cur = cur->next;
		}
		// 在这个地方 cur 指针就指向了 plist 链表的最后一个元素
		// prve 指针就指向了 plist 链表最后一个元素的前一个元素
		free(cur), cur = NULL;
		prve->next = NULL;
	}
}
// 单链表头删
void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		printf("此链表为空链表，无元素可删除\n");
		return;
	}
	else if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode* cur = (*pplist)->next;
		free(*pplist);
		*pplist = cur;
	}
}
// 单链表查找
SListNode* SListFind(SListNode* plist, SListDataType x)
{
	SListNode* cur = plist;
	while (cur->next != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}


// 单链表在pos位置之后插入x

void SListInsertAfter(SListNode* pos, SListDataType x)
{
	assert(pos);
	SListNode* cur = pos->next;
	SListNode* newNode = creatNewNode(x);
	pos->next = newNode;
	newNode->next = cur;
}

