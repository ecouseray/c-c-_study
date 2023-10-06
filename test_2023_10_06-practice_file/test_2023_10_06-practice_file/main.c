#define _CRT_SECURE_NO_WARNINGS

// 随机向文件中写入 100 个数字
// 从文件中拿出数据并且排序后再写入文件中

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>


int cmp(void* e1, void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}

int main()
{
	srand((unsigned int)time(NULL));

	FILE* pf = fopen("test.txt", "w");
	if (!pf)
	{
		perror("fopen");
		return 1;
	}

	int theValue = rand() % 10000 + 1;

	int i = 0;
	for (i = 0; i < 100; i++)
	{
		theValue = rand() % 10000 + 1;
		fprintf(pf, "%d ", theValue);
	}
	fclose(pf);
	pf = NULL;


	int arr[100] = { 0 };
	pf = fopen("test.txt", "r");
	if (!pf)
	{
		perror("fopen");
		return 2;
	}

	for (i = 0; i < 100; i++)
	{
		fscanf(pf, "%d", &arr[i]);
	}
	fclose(pf);
	pf = NULL;

	//qsort(arr, sizeof(arr), sizeof(arr) / sizeof(arr[0]), cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

	}


	pf = fopen("test.txt", "w");
	if (!pf)
	{
		perror("fopen");
		return 3;
	}

	for (i = 0; i < 100; i++)
	{
		fprintf(pf, "%d ", arr[i]);
	}
	
	fclose(pf);
	pf = NULL;

	return 0;
}