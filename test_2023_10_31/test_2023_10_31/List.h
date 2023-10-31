#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


typedef int ListDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	ListDataType data;
}ListNode;


void ListPrint(ListNode* phead);
void ListPushBack(ListNode* phead, ListDataType x);
void ListInit(ListNode** pphead);
//ListNode* ListInit(ListNode* phead);
void ListPopBack(ListNode* phead);

void ListPushFront(ListNode* phead, ListDataType x);
void ListPopFront(ListNode* phead);