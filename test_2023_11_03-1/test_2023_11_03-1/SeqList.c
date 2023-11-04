#include "SeqList.h"


void SeqListInit(SeqList* psl);
void SeqListPushBack(SeqList* psl, SeqListDataType x);
void SeqListPopBack(SeqList* psl);
void SeqListPushFront(SeqList* psl, SeqListDataType x);
void SeqListPopFront(SeqList* psl);
int SeqListFind(SeqList* psl, SeqListDataType x);
void SeqListInsert(SeqList* psl, int pos, SeqListDataType x);
void SeqListErase(SeqList* psl, int pos);
void SeqListDestory(SeqList* psl);
void SeqListPrint(SeqList* psl);