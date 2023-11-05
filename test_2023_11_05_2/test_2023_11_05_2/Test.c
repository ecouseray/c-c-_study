// 二叉树
// 遍历
// 前序、中序、后序、层序
//   深度优先        广度优先
// 
// 链式结构
// 
// 任何一个二叉树都要看成3个部分
// 根节点、左子树、右子树
// 
// 前序（先序遍历） ：根  左子树  右子树 
// 
// 深度一般用递归或者栈，广度一般用队列
// 
// 一般的树的增删查改是没有意义的
//

#include <stdio.h>
#include <stdlib.h>

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
		
	printf("%c ", root->_data);
	PrevOrder(root->_left);
	PrevOrder(root->_right);
}

//void TreeSize(BTNode* root, int* psize)
//{
//	if (root == NULL)
//		return;
//	else
//		(*psize)++;
//	TreeSize(root->_left, psize);
//	TreeSize(root->_right, psize);
//}

int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	else
		return 1 + TreeSize(root->_left) + TreeSize(root->_right);
}

BTNode* CreateNode(int x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	node->_data = x;
	node->_left = NULL;
	node->_right = NULL;

	return node;
}
int TreeDepth(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL && root->_right == NULL)
		return 1;
	return 1 + (TreeDepth(root->_left) > TreeDepth(root->_right) ? \
		TreeDepth(root->_left) : TreeDepth(root->_right));
}

int main()
{
	BTNode* A = CreateNode('A');
	BTNode* B = CreateNode('B');
	BTNode* C = CreateNode('C');
	BTNode* D = CreateNode('D');
	BTNode* E = CreateNode('E');

	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;

	//PrevOrder(A);
	printf("%d\n", TreeDepth(A));
	return 0;
}



//void TreeSize(BTNode* root, int* psize)
//{
//	if (root == NULL)
//		return;
//	else if (root->_left == NULL && root->_right == NULL)
//		(*psize)++;
//	TreeSize(root->_left, psize);
//	TreeSize(root->_right, psize);
//}