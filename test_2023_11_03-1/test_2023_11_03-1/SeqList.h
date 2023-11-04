#pragma once

#include <stdio.h>

typedef int SeqListDataType;
typedef struct SeqList
{
	SeqListDataType* _a; // 顺序表存储数据的动态数组
	int _size;           // 记录当前顺序表的元素个数
	int _capacity;       // 记录当前顺序表的最大容量
}SeqList;

void SeqListInit(SeqList* psl);
void SeqListPushBack(SeqList* psl, SeqListDataType x);
void SeqListPopBack(SeqList* psl);
void SeqListPushFront(SeqList* psl, SeqListDataType x);
void SeqListPopFront(SeqList* psl);
int SeqListFind(SeqList* psl, SeqListDataType x);
void SeqListInsert(SeqList* psl, int pos, SeqListDataType x);
void SeqListErase(SeqList* psl, int pos);
void SeqListDestory(SeqList* psl);
void SeqListPrint(SeqList* psl);