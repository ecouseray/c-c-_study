#define _CRT_SECURE_NO_WARNINGS 

#include "bubbleSort.h"
#include <stdio.h>

int cmpIntArr(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}



int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	bubbleSort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmpIntArr);
	return 0;
}