#include "List.h"

void ListPrint(ListNode* pList);
void ListPushBack(ListNode** ppList, ListDataType x);
void ListPopBack(ListNode** ppList);
void ListPushFront(ListNode** ppList, ListDataType x);
void ListPopFront(ListNode** ppList);
ListNode* ListFind(ListNode* pList, ListDataType x);
void ListInsertAfter(ListNode* pos, ListDataType x);
void ListEraseAfter(ListNode* pos);