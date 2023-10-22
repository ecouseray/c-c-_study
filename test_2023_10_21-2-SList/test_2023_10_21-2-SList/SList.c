#include "SList.h"


// �������ӡ
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
// ������β��
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
		// ������ط� cur ָ���ָ���� plist ��������һ��Ԫ��
		cur->next = newNode;
	}
}
// �������ͷ��
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
// �������βɾ
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		printf("������Ϊ��������Ԫ�ؿ�ɾ��\n");
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
		// ������ط� cur ָ���ָ���� plist ��������һ��Ԫ��
		// prve ָ���ָ���� plist �������һ��Ԫ�ص�ǰһ��Ԫ��
		free(cur), cur = NULL;
		prve->next = NULL;
	}
}
// ������ͷɾ
void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		printf("������Ϊ��������Ԫ�ؿ�ɾ��\n");
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
// ���������
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


// ��������posλ��֮�����x

void SListInsertAfter(SListNode* pos, SListDataType x)
{
	assert(pos);
	SListNode* cur = pos->next;
	SListNode* newNode = creatNewNode(x);
	pos->next = newNode;
	newNode->next = cur;
}

