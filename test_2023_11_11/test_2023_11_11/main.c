#include <stdio.h>
#include <assert.h>


int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
		{
			return mid;
		}
		else if (a[begin] > a[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
	else  //(a[begin] > a[mid])
	{
		if (a[mid] > a[end])
		{
			return mid;
		}
		else if (a[begin] < a[mid])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
}


void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int PartSort(int* arr, int begin, int end)
{
	int midIndex = GetMidIndex(arr, begin, end);
	Swap(&arr[midIndex], &arr[end]);


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


int PartSort2(int* arr, int begin, int end)
{
	int midIndex = GetMidIndex(arr, begin, end);
	Swap(&arr[midIndex], &arr[end]);

	int key = arr[end];
	while (begin < end)
	{
		// begin 找大
		while (begin < end && arr[begin] <= arr[key])
			++begin;
		arr[end] = arr[begin];
		// end 找小
		while (begin < end && arr[end] >= arr[key])
			--end;
		arr[begin] = arr[end];
	}
	arr[begin] == key;
	return begin;
}


int PartSort3(int* arr, int begin, int end)
{
	int mid = GetMidIndex(arr, begin, end);
	Swap(&arr[mid], &arr[end]);
	
	int keyIndex = end;
	int cur = begin;
	int prev = begin - 1;
	while (cur < end)
	{
		if (arr[cur] < arr[keyIndex] && ++prev != cur)
			Swap(&arr[cur], &arr[prev]);

		++cur;

	}
	Swap(&arr[keyIndex], &arr[++prev]);
	return prev;
}




void QuickSort(int* arr, int left, int right)
{
	assert(arr);
	if (left >= right)
		return;

	if (left - right + 1 > 10)
	{

		int div = PartSort3(arr, left, right);
		QuickSort(arr, left, div - 1);
		QuickSort(arr, div + 1, right);
	}
	else
	{
		InsertSort(arr + left, right - left + 1);
	}

}



int main()
{
	int arr[] = { 6,1,2,7,9,3,4,8,10,5 };
	QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
	return 0;
}