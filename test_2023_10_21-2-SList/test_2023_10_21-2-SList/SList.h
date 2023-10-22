#pragma once
#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <string.h>
#include <errno.h>

typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;

// �������ӡ
void SListPrint(SListNode* plist);
// ������β��
void SListPushBack(SListNode** pplist, SListDataType x);
// �������ͷ��
void SListPushFront(SListNode** pplist, SListDataType x);
// �������βɾ
void SListPopBack(SListNode** pplist);
// ������ͷɾ
void SListPopFront(SListNode** pplist);
// ���������
SListNode* SListFind(SListNode* plist, SListDataType x);


// ��������posλ��֮�����x

void SListInsertAfter(SListNode* pos, SListDataType x);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);