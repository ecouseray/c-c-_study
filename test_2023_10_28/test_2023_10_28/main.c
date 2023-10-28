/*

ţ������
	���ı����˳��

˼·��
	ȡ�ڵ�����β�壬
	�����С��val��������β�嵽һ������
	����Ǵ���val��������β�嵽��һ������
	�õķ�ʽ����һ���ڱ�����ͷ�ڵ�

	���������
		����ɻ�

ʵ�֣�

typedef struct ListNode ListNode;
ListNode* partition(ListNode* pHead, int x)
{
	ListNode* lessHead, *lessTail;
	ListNode* moreHead, *moreHail;
	lessHead = lessTail = (ListNode*)malloc(sizeof(ListNode));
	moreHead = moreTail = (ListNode*)malloc(sizeof(ListNode));
	lessHead->next = moreHead->next = NULL;
	// ���û��С��val���ߴ���val��ֵ����Σ��

	// 1 -> 9 -> 3 -> 5 -> 6 -> 7 -> 2 - NULL  4
	ListNode* cur = pHead;
	while(cur != NULL)
	{
		if (cur->val < x)
		{
			leseHead->next = cur;
			lessTail = lessTail->next;
		}
		else
		{
			moreHead->next = cur;
			moreTail = moreTail->next;
		}
		cur = cur->next;
	}
	
	lessTail->next = moreHead->next;
	moreTail->next = NULL;

	ListNode* real = lessHead->next;
	free(lessHead);
	free(moreHead);

	return real;
}

*/

/*

��������(�Գ�����)��

˼·��
	�ó���벿�� ���� ��ǰ�벿�ֱȽ�

ʵ�֣�

ListNode* func(ListNode* pHead)
{
	ListNode* NewNode = nullptr;
	ListNode* cur = pHead;

	while(cur)
	{
		ListNode* next = cur->next;
		cur->next = NewNode;

		NewNode = cur;
		cur = next;
	}
	return NewNode;
}

class PalindromeList {
public:
	bool chkPalindrome(ListNode* A)
	{

		ListNode* slow = A;
		ListNode* fast = A;
		ListNode* prve = nullptr;
		while(fast && fast->next)
		{
			prve = slow;
			slow = slow->next;
			fast = fast->next->next;
		}

		prve->next = nullptr;
		slow = func(slow);

		while(A)
		{
			if (A->val != slow->val)
			{
				return false;
			}
			else
			{
				A = A->next;
				slow = slow->next;
			}
		}
		return true;
		}
};
*/

/*

160.�ཻ����

˼·��
	���������β�ڵ���ͬ����ַ��
	�����������ĳ��ȣ��ó���������������������֮�
	֮������һ���ߣ����Ƿ����ĳ����ͬ
ʵ�֣�
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
	ListNode* curA = headA, *curB = headB;
	int la = 0, lb = 0;
	while(curA)
	{
		++la;
		curA = curA->next;
	}
	while(curB)
	{
		++lb;
		curB = curB->next;
	}
	int grp = abs(la, lb);
	LiseNode* longList = headA;
	LiseNode* shortList = headB;
	if (lb > la)
	{
		longList = headB;
		shortList = headA;
	}
	while(grp--)
	{
		longList = longList->next;
	}
	while(longList)
	{
		if (longList != shortList)
			return NULL;
		longList = longList->next;
		shortList = shortList->next;
	}
	return longList;
}

*/

/*

141.�����л�

˼·��
	����ָ�룬��ָ��һ������������ָ��һ����һ��
	�������ָ�������������л��������޻�

ʵ�֣�
typedef struct ListNode ListNode;
bool hasCycle(struct ListNode *head) {

	ListNode* slow = head;
	ListNode* fast = head;
	while(fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return true;
		}

	}
	return false;
}

֤����
	Ϊʲô��ָ�����׷����ָ��
	Ϊʲô��ָ��Ҫһ�������������������Ĳ��в��У�n���أ�

	x - 1 ��������һ����Ϊ 0 
	���� x - 2 / x - 3 
	xΪ����  ���� ��Ϊ 0 �� ���������Ϊ����
	xΪż��  ���� ��Ϊ 0

	��������£����ܾ���Զ��������
*/

/*

���������ػ�����ڽڵ�
˼·��
	˼·һ��д�����鷳������
		����������������Ͽ�����
		һ�������ͷ���Ͽ�����Ϊ��һ������
		������������ཻ�ڵ�

	˼·����д�����򵥣���Ҫ��ʽ֤�������
		�ɻ�֮ǰ���룺L + ���������㣺X
		��ָ��·�� �� L + X
		��ָ��·�� �� L + X + C(�����ܳ�)
		2 *��L + X�� = L����������������
		�̡������á�������
		����֮�����ߣ���һ����ͷ�ߣ�������ʱ����ǳɻ��ڵ�

		�����̣��أ��������̣��Σ��ã���
		�̡������Σ��ã���
		

ʵ�֣�

*/



















































//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int c = add(1, 2);
//	return 0;
//}


// �������� �� �����ַ���


//#include <stdio.h>
//int main()
//{
//	int arr2[] = { 1,2,3,3,2,1 };
//	int arr1[] = { 1,2,4,3,2,1 };
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	int flag = 1;
//
//	if (size % 2 == 0)
//	{
//		int sIndex, eIndex;
//		sIndex = (size / 2) - 1;
//		eIndex = (size / 2);
//		while (sIndex > 0 && eIndex < size - 1)
//		{
//			if (arr1[sIndex] == arr1[eIndex])
//				sIndex--, eIndex++;
//			else
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	else
//	{
//		int sIndex, eIndex;
//		sIndex = eIndex = (size - 1) / 2;
//		while (sIndex > 0 && eIndex < size - 1)
//		{
//			if (arr1[sIndex] == arr1[eIndex])
//				sIndex--, eIndex++;
//			else
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	printf("%d\n", flag);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char str[] = "123421";
//	int size = strlen(str);
//	int flag = 1;
//
//	if (size % 2 == 0)
//	{
//		int sIndex, eIndex;
//		sIndex = (size / 2) - 1;
//		eIndex = (size / 2);
//		while (sIndex > 0 && eIndex < size - 1)
//		{
//			if (str[sIndex] == str[eIndex])
//				sIndex--, eIndex++;
//			else
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	else
//	{
//		int sIndex, eIndex;
//		sIndex = eIndex = (size - 1) / 2;
//		while (sIndex > 0 && eIndex < size - 1)
//		{
//			if (str[sIndex] == str[eIndex])
//				sIndex--, eIndex++;
//			else
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	printf("%d\n", flag);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,4,3,2,1 };
//	int arr[] = { 1,2,3,2,1 };
//	char str[] = "12321";
//	//int size = sizeof(arr1) / sizeof(arr1[0]);
//	int size = strlen(str);
//	int flag = 1;
//
//	int left = 0, right = size - 1;
//	while (left < right)
//	{
//		if (str[left] == str[right])
//			++left, --right;
//		else
//		{
//			flag = 0;
//			break;
//		}
//	}
//	printf("%d\n", flag);
//	return 0;
//}



//ListNode* func(ListNode* pHead)
//{
//	ListNode* NewNode = nullptr;
//	ListNode* cur = pHead;
//
//	while (cur)
//	{
//		ListNode* next = cur->next;
//		cur->next = NewNode;
//
//		NewNode = cur;
//		cur = next;
//	}
//	return NewNode;
//}