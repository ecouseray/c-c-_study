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
	//treeNodeSeqList childs; // ˳�����ߴ��ָ��
};


// ���ӣ����ֵ�