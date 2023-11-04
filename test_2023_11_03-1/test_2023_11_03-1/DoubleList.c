#include "DoubleList.h"

void ListInit(DListNode** pphead);
void ListPrint(DListNode* phead);
void ListDestory(DListNode** pphead);
void ListPushBack(DListNode* phead, DLDataType x);
void ListPophBack(DListNode* phead);
void ListPushFront(DListNode* phead, DLDataType x);
void ListPophFront(DListNode* phead);
void ListFind(DListNode* phead, DLDataType x);
bool ListEmpty(DListNode* phead);
size_t ListSize(DListNode* phead);
void ListInsert(DListNode* pos, DLDataType x);
void ListErase(DListNode* pos);