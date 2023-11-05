#include <stdio.h>

void test01()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	int j = 0;
	for (i = 0; j < sizeof(arr) / sizeof(arr[0]) - 1; ++i)
	{
		for (j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; ++j)
		{

			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void bubbleSort(int* arr, int sz)
{
	for (int i = 0; i < sz - 1; ++i)
	{
		int flag = 1;
		for (int j = 0; j < sz - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}

void func(int* arr, int sz)
{
	for (int i = 0; i < sz - 1; ++i)
	{
		for (int j = i + 1; j < sz; ++j)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 10,3,6,9,2,8,5,7,4,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubbleSort(arr, sz);
	func(arr, sz);
	return 0;
}