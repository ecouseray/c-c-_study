#include "SList.h"

static SListNode* creatNewNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListDataType));
	if (newNode == NULL)
	{
		printf("申请内存失败\n");
		exit(-1);
	}
	newNode->data = x;
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
		// 找到尾节点
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		// 现在tail就指向尾节点 
		SListNode* newNode = creatNewNode(x);
		tail->next = newNode;
	}
	
}
void SListPopBack(SListNode** pphead)
{
	//1.空
	//2.一个元素
	//3.一个以上元素
	if (*pphead == NULL)
	{
		printf("该链表为空，无元素可删除\n");
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SListNode* prev = NULL;
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		// 退出循环后，tail指向尾节点，prev指向尾节点的前一个节点
		free(tail);
		prev->next = NULL;
		//SListNode* tail = *pphead;
		//while (tail->next->next != NULL)
		//{
		//	tail = tail->next;
		//}

		//free(tail->next);
		//tail->next = NULL;
	}
}

void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = creatNewNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		newNode->next = *pphead;
	}
}
void SListPopFront(SListNode** pphead)
{
	//1.空
	if (*pphead == NULL)
	{
		printf("该链表为空，无法删除元素\n");
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		free(*pphead);
	}
}

void SListPrint(SListNode* phead)
{
	//assert(phead)   这个地方不断言，因为可能就是一个空的链表
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data); 
		cur = cur->next;
	}
	printf("NULL\n");
}