#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//1.
//struct SeqList
//{
//	int arr[10];
//	int size;
//};

//typedef int SLDataType;
//#define N 10

//2.
//struct SeqList
//{
//	SLDataType arr[N];
//	int size;
//};


#define DEFAULT_SZ 8
#define INS_SZ 4

//3.
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a; 
	int size;      // ��Ч���ݵĸ���
	int capacity;  // �������
}SeqList;


void SeqListInit(SeqList* ps);
void SeqListPrint(SeqList* ps);

// β�� βɾ  ͷ�� ͷɾ
void SeqListPushBack(struct SeqList* ps, SLDataType x);
void SeqListPopBack(struct SeqList* ps);
void SeqListPushFront(struct SeqList* ps, SLDataType x);
void SeqListPopFront(struct SeqList* ps);

// ����λ�ò���Ԫ��
void SeqListInsert(struct SeqList* ps, int pos, SLDataType x); 
// ��������������˳��� λ�ã� Ҫ�������

// ����λ��ɾ��Ԫ��
void SeqListErase(struct SeqList* ps, int pos);

int SeqListFind(SeqList* ps, SLDataType x);
int SeqListBinaryFind(SeqList* ps, SLDataType x);