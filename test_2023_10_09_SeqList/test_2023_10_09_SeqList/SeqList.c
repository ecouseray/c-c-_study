#include "SeqList.h"

void SeqListInit(SeqList* ps)
{
	//ps->size = 0;
	//ps->a = NULL;
	//ps->capacity = 0;
	ps->a = (SeqList*)malloc(sizeof(SLDataType) * DEFAULT_SZ);
	if (ps->a == NULL)
	{
		printf("申请内存失败\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

void SeqListCheckMemory(SeqList* ps)
{
	if (ps->size >= ps->capacity)
	{
		SLDataType* tmp = NULL;
		ps->capacity *= 2;
		//tmp = (SLDataType*)realloc(ps->a, (ps->capacity + ps->capacity / 2) * sizeof(SLDataType));
		tmp = (SLDataType*)realloc(ps->a, ps->capacity * sizeof(SLDataType));
		if (NULL != tmp)
			ps->a = tmp;
		else
		{
			printf("扩容失败\n");
			exit(-1);
		}
		//printf("扩容成功\n");
	}
	return;
}

void SeqListPushBack(struct SeqList* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckMemory(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPrint(SeqList* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListPopBack(struct SeqList* ps)
{
	assert(ps);
	//ps->a[ps->size - 1] = 0xcccccccc;
	--ps->size;
}

void SeqListPushFront(struct SeqList* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckMemory(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(struct SeqList* ps)
{
	assert(ps);
	int begin = 0;
	for (begin = 0; begin < ps->size - 1; ++begin)
	{
		ps->a[begin] = ps->a[begin + 1];
	}
	ps->size--;
}

// 任意位置插入元素
// 参数：所操作的顺序表， 位置， 要插入的数
void SeqListInsert(struct SeqList* ps, int pos, SLDataType x)
{
	assert(ps);
	SeqListCheckMemory(&ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}

// 任意位置删除元素
void SeqListErase(struct SeqList* ps, int pos)
{
	assert(ps);
	while (pos < ps->size - 1)
	{
		ps->a[pos] = ps->a[pos + 1];
		++pos;
	}
	ps->size--;
}


int SeqListFind(SeqList* ps, SLDataType x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}

void SeqListSort(SeqList* ps)
{
	int i = 0;
	for (i = 0; i < ps->size - 1; ++i)
	{
		int j = 0;
		for (j = 0; j < ps->size - 1 - i; ++j)
		{
			if (ps->a[j] > ps->a[j + 1])
			{
				SLDataType tmp = ps->a[j];
				ps->a[j] = ps->a[j + 1];
				ps->a[j + 1] = tmp;
			}
		}
	}
}

int SeqListBinaryFind(SeqList* ps, SLDataType x)
{
	int left = 0;
	int right = ps->size - 1;
	while (left < right)
	{
		int mid = left + ((right - left) >> 1);
		if (ps->a[mid] > x)
		{
			right = mid - 1;
		}
		else if (ps->a[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}




