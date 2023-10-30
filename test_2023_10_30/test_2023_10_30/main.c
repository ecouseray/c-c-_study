//复习



//struct Node
//{
//	int data;
//	struct Node* next;
//};

//typedef struct
//{
//	int data;
//	Node* next;
//}Node;

#include <stdio.h>
//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//
//union Un
//{
//	int i;
//	char c;
//};
//union Un un;

struct A
{
	int _a : 2;
	int _b : 5;
	int _d : 30;
};
int main()
{
	//printf("%d\n", &(un.i));
	//printf("%d\n", &(un.c));
	//下面输出的结果是什么？
	//un.i = 0x12345678;
	//un.c = 0x11;
	//printf("%x\n", un.i);
	printf("%d\n", sizeof(struct A));
}