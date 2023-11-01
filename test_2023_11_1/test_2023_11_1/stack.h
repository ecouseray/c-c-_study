#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int StackDataType;

typedef struct Stack
{
	StackDataType* _a;
	int _top;
	int _capacity;
}Stack;

void StackInit(Stack* pst);
void StackDestory(Stack* pst);
void StackPush(Stack* pst, StackDataType x);
void StackPop(Stack* pst);
int StackSize(Stack* pst);

// 返回1为真  返回0为假
int StackEmpty(Stack* pst);

// 获取栈顶数据
StackDataType StackTop(Stack* pst);

