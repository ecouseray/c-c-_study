#include "SList.h"

static SListNode* creatNewNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListDataType));
	if (newNode == NULL)
	{
		printf("�����ڴ�ʧ��\n");
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
		// �ҵ�β�ڵ�
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		// ����tail��ָ��β�ڵ� 
		SListNode* newNode = creatNewNode(x);
		tail->next = newNode;
	}
	
}
void SListPopBack(SListNode** pphead)
{
	//1.��
	//2.һ��Ԫ��
	//3.һ������Ԫ��
	if (*pphead == NULL)
	{
		printf("������Ϊ�գ���Ԫ�ؿ�ɾ��\n");
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
		// �˳�ѭ����tailָ��β�ڵ㣬prevָ��β�ڵ��ǰһ���ڵ�
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
	//1.��
	if (*pphead == NULL)
	{
		printf("������Ϊ�գ��޷�ɾ��Ԫ��\n");
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
	//assert(phead)   ����ط������ԣ���Ϊ���ܾ���һ���յ�����
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data); 
		cur = cur->next;
	}
	printf("NULL\n");
}