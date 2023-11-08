#include "Sort.h"

// 快速排序

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int PartSort(int* arr, int begin, int end)
{
	int keyIndex = end;
	while (begin < end)
	{
		// begin 找大
		while (begin < end && arr[begin] <= arr[keyIndex])
		{
			++begin;
		}
		// end 找小
		while (begin < end && arr[end] >= arr[keyIndex])
		{
			--end;
		}
		Swap(&arr[begin], &arr[end]);
	}
	Swap(&arr[begin], &arr[keyIndex]);
	return begin;
}

void QuickSort(int* arr, int left, int right)
{
	assert(arr);
	//if (left >= right)
	//	return;

	if (left < right)
	{
		int div = PartSort(arr, left, right);
		QuickSort(arr, left, div - 1);
		QuickSort(arr, div + 1, right);
	}
}