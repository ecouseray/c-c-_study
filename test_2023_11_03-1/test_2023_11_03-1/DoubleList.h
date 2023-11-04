#pragma once
#include <stdio.h>
#include <stdbool.h>

// 这个DoubleList是带哨兵位的双向循环链表

typedef int DLDataType;
typedef struct DListNode
{
	DLDataType _data;
	struct DList* prev;
	struct DList* next;
}DListNode;

void ListInit(DListNode** pphead);
void ListPrint(DListNode* phead);
void ListDestory(DListNode** pphead);
void ListPushBack(DListNode* phead, DLDataType x);
void ListPophBack(DListNode* phead);
void ListPushFront(DListNode* phead, DLDataType x);
void ListPophFront(DListNode* phead);
void ListFind(DListNode* phead, DLDataType x);
bool ListEmpty(DListNode* phead);
size_t ListSize(DListNode* phead);
void ListInsert(DListNode* pos, DLDataType x);
void ListErase(DListNode* pos);