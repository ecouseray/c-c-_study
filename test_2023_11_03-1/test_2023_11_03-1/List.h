#pragma once
#include <stdio.h>

// ���List�ǲ����ڱ�λͷ�ڵ�ĵ���ѭ������

typedef int ListDataType;
typedef struct ListNode
{
	ListDataType _data;
	struct ListNode* _next;
}ListNode;

void ListPrint(ListNode* pList);
void ListPushBack(ListNode** ppList, ListDataType x);
void ListPopBack(ListNode** ppList);
void ListPushFront(ListNode** ppList, ListDataType x);
void ListPopFront(ListNode** ppList);
ListNode* ListFind(ListNode* pList, ListDataType x);
void ListInsertAfter(ListNode* pos, ListDataType x);
void ListEraseAfter(ListNode* pos);
void ListDestory(ListNode** ppList);