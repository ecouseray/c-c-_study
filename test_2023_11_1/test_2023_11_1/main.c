/*

栈和队列：
	栈和队列任然是属于线性表
	有n个元素构成的集合，逻辑结构呈现线性

	顺序表、链表、栈、队列、串

	数据在固定的一端，进行插入(入栈)和删除(出栈)	（栈顶）

	物理实现可以用数组，也可以用链表

	实现栈建议使用的结构：数组，因为简单

	栈的作用：
		有后进先出的场景：
			迷宫问题
			表达式求解
			递归改成非递归

*/


#include "stack.h"


void StackTest()
{
	Stack st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);

	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}

	StackDestory(&st);

}




int main()
{
	StackTest();
	return 0;
}

/*

队列底层结构建议使用：链表
	

*/