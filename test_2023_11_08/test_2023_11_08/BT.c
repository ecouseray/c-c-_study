#include "BT.h"

int TreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return 1 + TreeSize(root->left) + TreeSize(root->right);
}

int TreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int left = TreeDepth(root->left);
	int right = TreeDepth(root->right);
	return left > right ? left + 1 : right + 1;
}