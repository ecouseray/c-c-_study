#define _CRT_SECURE_NO_WARNINGS 



/*
动态内存管理：
malloc
calloc
realloc
*/

#include <stdio.h>
#include <string.h>
#include <errno.h>

// INT_MAX;

// 
// 变长数组 C99标准下可行，但不可以初始化，
// 只是在创建的时候，可以使用变量，但是并不是说在创建好之后，可以让他的空间变化
//


//int main()
//{
//	//int i = 10;
//	//int arr[10] = { 0 };
//	int *p = (int*)malloc(sizeof(int) * 10);// 申请失败返回NULL空指针
//	// 申请在堆区
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	memset(p, 0, sizeof(int) * 10);
//	// 在不free的时候，并不是说空间不回收了
//	// 在程序关闭的时候，系统自动会回收空间的
//	free(p);
//	p = NULL;
//	// free 的意思将p指向的空间返还给操作系统，但是指针变量p中的本身的值不会发生变化，任然记录着当时malloc到的地址
//	// 此时，如果不将p赋值为NULL，p就是一个野指针，很危险
//	return 0;
//}


// calloc(元素个数, 每个元素大小) 
// 这个函数在使用的时候，会默认初始化指针指向的空间，全部初始化成零
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}


// calloc = malloc + memset

// 
// realloc可以让动态申请空间更加灵活
// 
// realloc(要调整的那块空间的起始地址, 新的空间的总大小);
// 
// 
int main()
{
	int* p = (int*)malloc(40);

	// 扩容

	// 问题：realloc是如何工作的？
	// 两种情况，1是直接在原来的空间基础上，后面继续追加空间，但是有可能影响原来空间后面本来的空间
	// 2.找一块新的空间，重新开辟并且初始化原来那一部分的空间
	// 答案是：情况2 + 情况1
	// 如果情况1 后面的空间够用，用1，不够用就用情况2
	// p = realloc(p, 80);
	// 但是还有一个问题，如果这个地方申请的空间过于大的话，扩容失败，会返回NULL，用p直接接收的时候会丢掉原来的数据
	int * ptr = (int*)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}
	
	;

	free(p);
	p = NULL;
	return 0;
}
// 内存池：相对满足当前所需要的空间，稍微大一点，然后程序自己维护这一块空间


/*
int InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	pc->capacity = DEFAULT_SZ;
	//加载文件的信息到通讯录中
	LoadContact(pc);
	return 0;
}


void AddContact(Contact* pc)
{
	assert(pc);
	//增容
	CheckCapacity(pc);
	//
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("增加成功\n");
}


void CheckCapacity(Contact* pc)
{
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
		}
	}
}


void LoadContact(Contact* pc)
{
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo tmp = { 0 };

	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead) == 1)
	{
		CheckCapacity(pc);

		pc->data[pc->count] = tmp;
		pc->count++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

*/