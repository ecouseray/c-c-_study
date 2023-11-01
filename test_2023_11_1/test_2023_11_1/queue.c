#include "queue.h"

// 初始化队列
void QueueInit(Queue* q)
{
	assert(q);
	q->_head = q->_tail = NULL;
}
// 队尾入队列
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
// 队头出队列
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
// 获取队列头部元素
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->_head);
	return q->_head->_data;
}
// 获取队列队尾元素
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(q->_tail);
	return q->_tail->_data;
}
// 获取队列中有效元素个数
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
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->_head == NULL ? 1 : 0;
}
// 销毁队列
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


// 有效的括号

// bool ret = false;
// break; 
//
//