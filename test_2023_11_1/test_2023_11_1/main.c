/*

ջ�Ͷ��У�
	ջ�Ͷ�����Ȼ���������Ա�
	��n��Ԫ�ع��ɵļ��ϣ��߼��ṹ��������

	˳�������ջ�����С���

	�����ڹ̶���һ�ˣ����в���(��ջ)��ɾ��(��ջ)	��ջ����

	����ʵ�ֿ��������飬Ҳ����������

	ʵ��ջ����ʹ�õĽṹ�����飬��Ϊ��

	ջ�����ã�
		�к���ȳ��ĳ�����
			�Թ�����
			���ʽ���
			�ݹ�ĳɷǵݹ�

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

���еײ�ṹ����ʹ�ã�����
	

*/