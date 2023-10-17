#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int SListDataType;
typedef struct SListNode
{
	SListDataType a;
	struct SListNode* next;
}SListNode;

void SListPushBack(SListNode** pphead, SListDataType x);

void SListPrint(SListNode* phead);

void SListPopBack(SListNode** pphead);