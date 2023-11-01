#include "List.h"

static ListNode* BuyListNode(ListDataType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
		return NULL;
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void ListPushBack(ListNode* phead, ListDataType x)
{
	assert(phead);
	ListNode* tail = phead->prev;
	ListNode* newNode = BuyListNode(x);

	tail->next = newNode;
	newNode->prev = tail;

	newNode->next = phead;
	phead->prev = newNode;
}

void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	//while (cur != phead->prev)
	//{
	//	printf("%d->", cur->data);
	//  cur = cur->next;
	//}
	//printf("%d->", cur->data);
	while (cur != phead)
	{
		printf("%d  ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListInit(ListNode** pphead)
{
	*pphead = BuyListNode(0);
	(*pphead)->next = *pphead;
	(*pphead)->prev = *pphead;
}

void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* tail = phead->prev;
	(tail->prev)->next = phead;
	phead->prev = tail->prev;
	free(tail);
}


void ListPushFront(ListNode* phead, ListDataType x)
{
	assert(phead);
	ListNode* newNode = BuyListNode(x);
	ListNode* cur = phead->next;

	phead->next = newNode;
	newNode->prev = phead;

	newNode->next = cur;
	cur->prev = newNode;
}
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* cur = phead->next;

	phead->next = phead->next->next;
	cur->next->prev = phead;

	free(cur);
}

void ListClear(ListNode* phead)
{
	// 清理所有数据节点，保留头节点，可以继续使用
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	phead->next = phead;
	phead->prev = phead;
}

void ListDestory(ListNode** pphead)
{
	assert(*pphead);
	// 销毁
	ListClear(*pphead);
	free(*pphead);
	*pphead = NULL;
}