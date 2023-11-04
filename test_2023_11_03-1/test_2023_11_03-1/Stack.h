#pragma once
#include <stdio.h>
#include <stdbool.h>

typedef int StackDataType;
typedef struct Stack
{
	StackDataType* _a;
	int _size;
	int _capacity;
}Stack;

void StackInit(Stack* ps);
void StackDestroy(Stack* ps);
void StackPush(Stack* ps, StackDataType x);
void StackPop(Stack* ps);

StackDataType StackTop(Stack* ps);
bool StackEmpty(Stack* ps);
int StackSize(Stack* ps);