#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ð¡¶Ñ

typedef int heapDataType;

typedef struct heap
{
	heapDataType* _a;
	int _size;
	int _capacity;
}heap;

void HeapInit(heap* php, heapDataType* a, int n);
void HeapDestory(heap* php);
void HeapPush(heap* php);
void HeapPop(heap* php);
heapDataType HeapTop(heap* php);






