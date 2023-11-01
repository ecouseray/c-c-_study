#include "queue.h"

// ��ʼ������
void QueueInit(Queue* q)
{
	assert(q);
	q->_head = q->_tail = NULL;
}
// ��β�����
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
	newNode->_data = data;
	newNode->_next = NULL;
	if (q->_head == NULL)
	{
		q->_head = q->_tail = newNode;
	}
	else
	{
		q->_tail->_next = newNode;
		q->_tail = newNode;
	}
}
// ��ͷ������
void QueuePop(Queue* q)
{
	assert(q);
	assert(q->_head);
	if (q->_head->_next == NULL)
	{
		free(q->_head);
		q->_head = q->_tail = NULL;
	}
	else
	{
		QueueNode* del = q->_head;
		q->_head = q->_head->_next;
		free(del);
	}
}
// ��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->_head);
	return q->_head->_data;
}
// ��ȡ���ж�βԪ��
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(q->_tail);
	return q->_tail->_data;
}
// ��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* q)
{
	assert(q);
	QueueNode* cur = q->_head;
	int count = 0;
	while (cur)
	{
		++count;
		cur = cur->_next;
	}
	return count;
}
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->_head == NULL ? 1 : 0;
}
// ���ٶ���
void QueueDestroy(Queue* q)
{
	assert(q);
	QueueNode* cur = q->_head;
	while (cur)
	{
		QueueNode* del = cur;
		cur = cur->_next;
		free(del);
	}
	q->_head = q->_tail = NULL;
}


// ��Ч������

// bool ret = false;
// break; 
//
//