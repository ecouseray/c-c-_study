#pragma once

#include <stdio.h>

typedef int SeqListDataType;
typedef struct SeqList
{
	SeqListDataType* _a; // ˳���洢���ݵĶ�̬����
	int _size;           // ��¼��ǰ˳����Ԫ�ظ���
	int _capacity;       // ��¼��ǰ˳�����������
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