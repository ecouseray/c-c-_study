#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SListDataType;

typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;

void SListPushBack(SListNode** pphead, SListDataType x);
void SListPopBack(SListNode* phead);

void SListPushFront(SListNode** pphead, SListDataType x);
void SListPopFront(SListNode* phead);

void SListPrint(SListNode* phead);