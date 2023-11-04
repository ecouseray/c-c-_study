#pragma once
#include <stdio.h>

// 这个List是不带哨兵位头节点的单向不循环链表

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