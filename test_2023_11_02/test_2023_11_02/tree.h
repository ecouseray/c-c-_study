#pragma once

#define N 10

typedef int treeDataType;
typedef struct treeNode
{
	treeDataType _data;
	struct treeNode* _child[N];
}treeNode;


struct treeNode1
{
	int val;
	//treeNodeSeqList childs; // 顺序表里边存放指针
};


// 左孩子，右兄弟