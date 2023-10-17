#include "SList.h"

int main()
{
	SListNode* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPrint(phead);
	SListPopBack(&phead);
	return 0;
}