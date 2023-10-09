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
	int size;      // 有效数据的个数
	int capacity;  // 最大容量
}SeqList;


void SeqListInit(SeqList* ps);
void SeqListPrint(SeqList* ps);

// 尾插 尾删  头插 头删
void SeqListPushBack(struct SeqList* ps, SLDataType x);
void SeqListPopBack(struct SeqList* ps);
void SeqListPushFront(struct SeqList* ps, SLDataType x);
void SeqListPopFront(struct SeqList* ps);

// 任意位置插入元素
void SeqListInsert(struct SeqList* ps, int pos, SLDataType x); 
// 参数：所操作的顺序表， 位置， 要插入的数

// 任意位置删除元素
void SeqListErase(struct SeqList* ps, int pos);

int SeqListFind(SeqList* ps, SLDataType x);
int SeqListBinaryFind(SeqList* ps, SLDataType x);