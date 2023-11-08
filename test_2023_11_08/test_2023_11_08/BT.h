#pragma once
#include <stdio.h>

typedef int BTDataType;
typedef struct BTNode
{
	BTDataType data;
	struct BTNode* left;
	struct BTNode* right;
}BTNode;

int TreeSize(BTNode* root);
int TreeDepth(BTNode* root); 
