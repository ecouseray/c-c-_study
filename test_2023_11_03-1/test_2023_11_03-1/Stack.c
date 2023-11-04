#include "Stack.h"

void StackInit(Stack* ps);
void StackDestroy(Stack* ps);
void StackPush(Stack* ps, StackDataType x);
void StackPop(Stack* ps);

StackDataType StackTop(Stack* ps);
bool StackEmpty(Stack* ps);
int StackSize(Stack* ps);