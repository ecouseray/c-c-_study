#include "Sort.h"
#include "BT.h"

void TestInsertSort()
{
	int arr[] = { 1,3,5,7,9,10,8,6,4,2 };
	PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
	InsertSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
}

void TestShellSort()
{
	int arr[] = { 1,3,5,7,9,10,8,6,4,2 };
	PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
	ShellSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
}

void TestSelectSort()
{
	int arr[] = { 1,3,5,7,9,10,8,6,4,2 };
	PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
	SelectSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
}

void TestBubbleSort()
{
	//int arr[] = { 1,3,5,7,9,10,8,6,4,2 };
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
}

void TestHeapSort()
{
	int arr[] = { 1,3,5,7,9,10,8,6,4,2 };
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
	HeapSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArr(arr, sizeof(arr) / sizeof(arr[0]));
}


//int main()
//{
//	//TestInsertSort();
//	//TestShellSort();
//	//TestSelectSort();
//	//TestBubbleSort();
//	//TestHeapSort();
//	return 0;
//}



BTNode* CreateNode(int x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
		exit(-1);
	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void TestBT()
{
	BTNode* A = CreateNode('A');
	BTNode* B = CreateNode('B');
	BTNode* C = CreateNode('C');
	BTNode* D = CreateNode('D');
	BTNode* E = CreateNode('E');

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;
}

int main()
{

}