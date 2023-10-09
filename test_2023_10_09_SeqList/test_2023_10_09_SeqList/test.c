#include "SeqList.h"

// 测试头插尾插,头删尾删
void testSeqList1()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);


	SeqListPopBack(&s);
	SeqListPopBack(&s);

	SeqListPushFront(&s, -1);
	SeqListPushFront(&s, -2);

	SeqListPrint(&s);

	SeqListPopFront(&s);

	SeqListPrint(&s);

	SeqListInsert(&s, 2, 100); 
	SeqListInsert(&s, 5, 200); 
	SeqListErase(&s, 5); 
	SeqListPrint(&s);

	printf("%d\n", SeqListFind(&s, 100));

	SeqListSort(&s);
	SeqListPrint(&s);


	printf("%d\n", SeqListBinaryFind(&s, 4));
}

int main()
{
	//testSeqList1();


	return 0;
}



//借助同样大空间的数组
int removeElement(int* nums, int numsSize, int val) {

	int* ptr = (int*)malloc(sizeof(int) * numsSize);
	int* tmp = ptr;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] != val)
		{
			tmp[i++] = nums[i];
		}
	}
	return (tmp - ptr);

}


//原地，两个指针
int removeElement(int* nums, int numsSize, int val) {

	int* ptr1 = nums; 
	int* ptr2 = ptr1;
	int* tmp = ptr2;
	for (int i = 0; i < numsSize; ++i)
	{
		if (nums[i] != val)
		{
			ptr1++;
		}
		else
		{
			*tmp == ptr1[i];
			ptr1++;
			tmp++;
		}
	}
	return (tmp - ptr2);
}


