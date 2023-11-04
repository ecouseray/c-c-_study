#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Ð¡¶Ñ

typedef int heapDataType;
typedef struct heap
{
	heapDataType* _a;
	int _size;
	int _capacity;
}heap;

void ADjustDown(heapDataType* a, int n, int root);
void Swap(heapDataType* p1, heapDataType* p2);
void HeapInit(heap* php, heapDataType* a, int n);
void HeapDestory(heap* php);
void HeapPush(heap* php, heapDataType x);
void HeapPop(heap* php);
heapDataType HeapTop(heap* php);