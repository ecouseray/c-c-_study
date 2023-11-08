#include "Sort.h"

int cmpInt(void* p1, void* p2)
{
	return *(int*)p1 - *(int*)p2;
}
void testQSort()
{
	int arr[] = { 1,9,3,7,5,10,2,6,4,8 };
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmpInt);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test()
{
	int arr[] = { 1,2,9,10,3,4,8,7,6,5 };
	QuickSort(arr, 0, 9);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	test();
	return 0;
}