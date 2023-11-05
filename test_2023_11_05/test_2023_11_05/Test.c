void Swap(int* buf1, int* buf2)
{
	int tmp = *buf1;
	*buf1 = *buf2;
	*buf2 = tmp;
}


// 这个向下调整函数，用于调整大堆
void ADjustDownBig(int* arr, int sz, int root)
// 这个函数的参数：需要调整的堆(数组)，堆的大小，需要调整的节点
{
	int parent = root;
	int maxChild = parent * 2 + 1; // 这里预先设定被调节点的左孩子是较大的节点
	while (maxChild < sz)
	{
		if (maxChild + 1 < sz && arr[maxChild + 1] > arr[maxChild])
		{
			++maxChild;
		}
		if (arr[maxChild] > arr[parent])
		{
			Swap(&arr[maxChild], &arr[parent]);
			parent = maxChild;
			maxChild = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// 这个向下调整函数，用于调整小堆
void ADjustDownLittle(int* arr, int sz, int root)
// 这个函数的参数：需要调整的堆(数组)，堆的大小，需要调整的节点
{
	int parent = root;
	int minChild = parent * 2 + 1;
	while (minChild < sz)
	{
		if (minChild + 1 < sz && arr[minChild + 1] < arr[minChild])
		{
			minChild++;
		}
		if (arr[minChild] < arr[parent])
		{
			Swap(&arr[minChild], &arr[parent]);
			parent = minChild;
			minChild = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void test1()
{
	// 实验1：
	int arr1[] = { 55,70,90,40,30,60,41 }; // 这是一个大堆，但头节点不合适
	int arr2[] = { 27,15,19,18,28,34,65 }; // 这是一个小堆，但头节点不合适
	// 上面两个堆(数组)，皆需要向下调整一下，便可以构成堆
	ADjustDownBig(arr1, sizeof(arr1) / sizeof(arr1[0]), 0);
	ADjustDownLittle(arr2, sizeof(arr2) / sizeof(arr2[0]), 0);
}


void BuildHeapBig(int* arr, int sz)
{
	for (int i = ((sz - 1) - 1) / 2; i >= 0; --i)
	{
		ADjustDownBig(arr, sz, i);
	}
}
void BuildHeapLittle(int* arr, int sz)
{
	for (int i = ((sz - 1) - 1) / 2; i >= 0; --i)
	{
		ADjustDownLittle(arr, sz, i);
	}
}

void test2()
{
	// 实验2：
	int arr1[] = { 13,56,34,78,53,28,67,98,38,21 }; // 将这个数组建堆，成为大堆
	int arr2[] = { 14,96,25,85,44,62,53,50,38,21 }; // 将这个数组建堆，成为小堆

	BuildHeapBig(arr1, sizeof(arr1) / sizeof(arr1[0]));
	BuildHeapLittle(arr2, sizeof(arr2) / sizeof(arr2[0]));

}

/*
通过向下调整算法，我们可以修正只有头节点不合适的大小堆
(我们可以对任何符合条件的节点进行向下调整)
通过建堆，我们可以将任何一个数组变换转变成堆
(对数组内的所有元素从后向前进行向下调整)
*/


void test3()
{
	// 实验3：堆排序
	int arr1[] = { 13,56,34,78,53,28,67,98,38,21 }; 
	int arr2[] = { 14,96,25,85,44,62,53,50,38,21 };
	// 对arr1和arr2两个数组进行排序 -- 使用堆排序
	// arr1 排降序 arr2 排升序
	BuildHeapBig(arr1, sizeof(arr1) / sizeof(arr1[0]));
	BuildHeapLittle(arr2, sizeof(arr2) / sizeof(arr2[0]));
	int end1 = sizeof(arr1) / sizeof(arr1[0]) - 1;
	while (end1 > 0)
	{
		Swap(&arr1[0], &arr1[end1]);
		ADjustDownBig(arr1, end1, 0); // 这里因为之前end1参数是向下调整的数组的元素个数，end1已经在前面-1了
		--end1;
	}
	int end2 = sizeof(arr2) / sizeof(arr2[0]) - 1;
	while (end2 > 0)
	{
		Swap(&arr2[0], &arr2[end2]);
		ADjustDownLittle(arr2, end2, 0);
		--end2;
	}
}

int main()
{
	test1();
	test2();
	test3();
	return 0;
}