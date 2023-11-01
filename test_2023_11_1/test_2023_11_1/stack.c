#include "stack.h"

void StackInit(Stack* pst)
{
	assert(pst);
	//pst->_a = NULL;
	//pst->_top = 0;
	//pst->_capacity = 0;
	pst->_a = (StackDataType*)malloc(sizeof(StackDataType) * 4);
	pst->_top = 0;
	pst->_capacity = 4;
}

void StackDestory(Stack* pst)
{
	assert(pst);
	free(pst->_a);
	pst->_capacity = 0;
	pst->_top = 0;
}

void StackPush(Stack* pst, StackDataType x)
{
	assert(pst);
	if (pst->_top == pst->_capacity)
	{
		pst->_capacity *= 1.5;
		StackDataType* tmp = (StackDataType*)realloc(pst->_a, \
		sizeof(StackDataType) * pst->_capacity);
		if (tmp == NULL)
		{
			printf("�ڴ治��\n");
			exit(-1);
		}
		else
		{
			pst->_a = tmp;
			printf("���ݳɹ�\n");
		}
	}
	pst->_a[pst->_top] = x;
	pst->_top++;
}

void StackPop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);
	//if (pst->_top > 0)
	--pst->_top;

}

int StackSize(Stack* pst)
{
	assert(pst);
	return pst->_top;
}

// ����1Ϊ��  ����0Ϊ��
int StackEmpty(Stack* pst)
{
	assert(pst);
	return ((pst->_top) == 0 ? 1 : 0);
	//return !pst->_top;
}

// ��ȡջ������
StackDataType StackTop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);

	return pst->_top;
}