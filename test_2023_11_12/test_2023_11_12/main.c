#include "stack.h"
//
//int GetMidIndex(int* a, int begin, int end)
//{
//	int mid = (begin + end) / 2;
//	if (a[begin] < a[mid])
//	{
//		if (a[mid] < a[end])
//		{
//			return mid;
//		}
//		else if (a[begin] > a[end])
//		{
//			return begin;
//		}
//		else
//		{
//			return end;
//		}
//	}
//	else  //(a[begin] > a[mid])
//	{
//		if (a[mid] > a[end])
//		{
//			return mid;
//		}
//		else if (a[begin] < a[mid])
//		{
//			return begin;
//		}
//		else
//		{
//			return end;
//		}
//	}
//}
//
//
//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int PartSort(int* arr, int begin, int end)
//{
//	int midIndex = GetMidIndex(arr, begin, end);
//	Swap(&arr[midIndex], &arr[end]);
//
//
//	int keyIndex = end;
//	while (begin < end)
//	{
//		// begin 找大
//		while (begin < end && arr[begin] <= arr[keyIndex])
//		{
//			++begin;
//		}
//		// end 找小
//		while (begin < end && arr[end] >= arr[keyIndex])
//		{
//			--end;
//		}
//		Swap(&arr[begin], &arr[end]);
//	}
//	Swap(&arr[begin], &arr[keyIndex]);
//	return begin;
//}
//
//
//int PartSort2(int* arr, int begin, int end)
//{
//	int midIndex = GetMidIndex(arr, begin, end);
//	Swap(&arr[midIndex], &arr[end]);
//
//	int key = arr[end];
//	while (begin < end)
//	{
//		// begin 找大
//		while (begin < end && arr[begin] <= arr[key])
//			++begin;
//		arr[end] = arr[begin];
//		// end 找小
//		while (begin < end && arr[end] >= arr[key])
//			--end;
//		arr[begin] = arr[end];
//	}
//	arr[begin] == key;
//	return begin;
//}
//
//
//int PartSort3(int* arr, int begin, int end)
//{
//	int mid = GetMidIndex(arr, begin, end);
//	Swap(&arr[mid], &arr[end]);
//
//	int keyIndex = end;
//	int cur = begin;
//	int prev = begin - 1;
//	while (cur < end)
//	{
//		if (arr[cur] < arr[keyIndex] && ++prev != cur)
//			Swap(&arr[cur], &arr[prev]);
//
//		++cur;
//
//	}
//	Swap(&arr[keyIndex], &arr[++prev]);
//	return prev;
//}
//
//
//
//
//void QuickSort(int* arr, int left, int right)
//{
//	assert(arr);
//	if (left >= right)
//		return;
//
//	if (left - right + 1 > 10)
//	{
//
//		int div = PartSort3(arr, left, right);
//		QuickSort(arr, left, div - 1);
//		QuickSort(arr, div + 1, right);
//	}
//	else
//	{
//		InsertSort(arr + left, right - left + 1);
//	}
//
//}
//
//
//
//void QuickSortNonR(int* arr, int left, int right)
//{
//	// 栈模拟实现
//	Stack st;
//	StackInit(&st);
//	StackPush(&st, right);
//	StackPush(&st, left);
//
//	while (!StackEmpty(&st))
//	{
//		int begin = StackTop(&st);
//		StackPop(&st);
//		int end = StackTop(&st);
//		StackPop(&st);
//
//		int div = PartSort3(arr, begin, end);
//		// [begin, div - 1] div [div + 1, end]
//
//		if (div + 1 < end)
//		{
//			StackPush(&st, end);
//			StackPush(&st, div + 1);
//		}
//
//		if (begin < div - 1)
//		{
//			StackPush(&st, div - 1);
//			StackPush(&st, begin);
//		}
//	}
//	StackDestory(&st);
//}

void _MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)
		return;

	int mid = (left + right) / 2;
	// [left, mid] [mid + 1, right]

	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid + 1, right, tmp);

	// 归并
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int Index = begin1;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[Index++] = a[begin1++];
		}
		else
		{
			tmp[Index++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[Index++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[Index++] = a[begin2++];
	}
	for (int i = left; i <= right; ++i)
	{
		a[i] = tmp[i];
	}
}


void MergeSort(int* a, int n)
{
	assert(a);
	int* tmp = (int*)malloc(sizeof(int) * n);

	_MergeSort(a, 0, n - 1, tmp);

	free(tmp);
	tmp = NULL;
}


int main()
{
	int arr[] = { 1,10,2,9,3,7 };
	MergeSort(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}