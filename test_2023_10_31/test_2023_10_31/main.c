#include "List.h"

// ����һ����8������
// ��õ��ǣ�����ͷ����ѭ������  
// ��1.oj�⡢
//	 2.�������ᵥ����Ϊ����ʹ��
//	 3.�������ݽṹ��һ���֣�ͼ����ϣ��
// 
//  ��ͷ˫��ѭ������
//  ͷ�ڵ��prevָ��β�ڵ㣬β�ڵ��nextָ��ͷ�ڵ㡢
//  stl �е�����������������

// �ص㣺�ṹ���ӣ������򵥣�
// ����Ϊ�յ�ʱ���Լ�������ָ��ָ���Լ�


void test01()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	// phead = ListInit(phead);
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);
	ListPushBack(phead, 5);

	ListPrint(phead);

	ListPopBack(phead);
	ListPopBack(phead);
	//ListPopBack(phead);
	//ListPopBack(phead);
	//ListPopBack(phead);
	//ListPopBack(phead);

	ListPushFront(phead, 5);
	ListPrint(phead); 
	ListPopFront(phead);

	ListPrint(phead);
}


int main()
{
	test01();
	return 0;
}