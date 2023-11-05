void Swap(int* buf1, int* buf2)
{
	int tmp = *buf1;
	*buf1 = *buf2;
	*buf2 = tmp;
}


// ������µ������������ڵ������
void ADjustDownBig(int* arr, int sz, int root)
// ��������Ĳ�������Ҫ�����Ķ�(����)���ѵĴ�С����Ҫ�����Ľڵ�
{
	int parent = root;
	int maxChild = parent * 2 + 1; // ����Ԥ���趨�����ڵ�������ǽϴ�Ľڵ�
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

// ������µ������������ڵ���С��
void ADjustDownLittle(int* arr, int sz, int root)
// ��������Ĳ�������Ҫ�����Ķ�(����)���ѵĴ�С����Ҫ�����Ľڵ�
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
	// ʵ��1��
	int arr1[] = { 55,70,90,40,30,60,41 }; // ����һ����ѣ���ͷ�ڵ㲻����
	int arr2[] = { 27,15,19,18,28,34,65 }; // ����һ��С�ѣ���ͷ�ڵ㲻����
	// ����������(����)������Ҫ���µ���һ�£�����Թ��ɶ�
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
	// ʵ��2��
	int arr1[] = { 13,56,34,78,53,28,67,98,38,21 }; // ��������齨�ѣ���Ϊ���
	int arr2[] = { 14,96,25,85,44,62,53,50,38,21 }; // ��������齨�ѣ���ΪС��

	BuildHeapBig(arr1, sizeof(arr1) / sizeof(arr1[0]));
	BuildHeapLittle(arr2, sizeof(arr2) / sizeof(arr2[0]));

}

/*
ͨ�����µ����㷨�����ǿ�������ֻ��ͷ�ڵ㲻���ʵĴ�С��
(���ǿ��Զ��κη��������Ľڵ�������µ���)
ͨ�����ѣ����ǿ��Խ��κ�һ������任ת��ɶ�
(�������ڵ�����Ԫ�شӺ���ǰ�������µ���)
*/


void test3()
{
	// ʵ��3��������
	int arr1[] = { 13,56,34,78,53,28,67,98,38,21 }; 
	int arr2[] = { 14,96,25,85,44,62,53,50,38,21 };
	// ��arr1��arr2��������������� -- ʹ�ö�����
	// arr1 �Ž��� arr2 ������
	BuildHeapBig(arr1, sizeof(arr1) / sizeof(arr1[0]));
	BuildHeapLittle(arr2, sizeof(arr2) / sizeof(arr2[0]));
	int end1 = sizeof(arr1) / sizeof(arr1[0]) - 1;
	while (end1 > 0)
	{
		Swap(&arr1[0], &arr1[end1]);
		ADjustDownBig(arr1, end1, 0); // ������Ϊ֮ǰend1���������µ����������Ԫ�ظ�����end1�Ѿ���ǰ��-1��
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