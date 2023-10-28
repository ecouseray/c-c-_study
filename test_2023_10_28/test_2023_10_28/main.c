/*

牛客网：
	不改变相对顺序

思路：
	取节点下来尾插，
	如果是小于val，拿下来尾插到一个链表
	如果是大于val，拿下来尾插到另一个链表
	好的方式，开一个哨兵卫的头节点

	特殊情况：
		链表成环

实现：

typedef struct ListNode ListNode;
ListNode* partition(ListNode* pHead, int x)
{
	ListNode* lessHead, *lessTail;
	ListNode* moreHead, *moreHail;
	lessHead = lessTail = (ListNode*)malloc(sizeof(ListNode));
	moreHead = moreTail = (ListNode*)malloc(sizeof(ListNode));
	lessHead->next = moreHead->next = NULL;
	// 如果没有小于val或者大于val的值，很危险

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

回文链表(对称链表)：

思路：
	拿出后半部分 逆置 跟前半部分比较

实现：

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

160.相交链表

思路：
	两个链表的尾节点相同（地址）
	求出两个链表的长度，让长的链表先走两个链表长度之差步
	之后两个一起走，看是否会在某处相同
实现：
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

141.链表判环

思路：
	快慢指针，快指针一次走两步，慢指针一次走一步
	如果快慢指针能相遇，则有环，否则无环

实现：
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

证明：
	为什么快指针可以追上慢指针
	为什么快指针要一次走两步，走三步、四步行不行？n步呢？

	x - 1 距离最终一定会为 0 
	但是 x - 2 / x - 3 
	x为奇数  最终 不为 0 ， 计算距离任为奇数
	x为偶数  最终 不为 0

	极端情况下：可能就永远遇不到了
*/

/*

环形链表返回环的入口节点
思路：
	思路一：写起来麻烦，理解简单
		环内相遇，相遇点断开链表，
		一个链表从头，断开处作为另一个链表
		两个链表求叫相交节点

	思路二：写起来简单，需要公式证明，理解
		成环之前距离：L + 环内相遇点：X
		慢指针路程 ： L + X
		快指针路径 ： L + X + C(环的周长)
		2 *（L + X） = L　＋　ｘ　＋　Ｃ
		Ｌ　＝　Ｃ　－　Ｘ
		相遇之后再走，另一个从头走，相遇的时候就是成环节点

		２（Ｌ＋Ｘ）　＝　Ｌ＋Ｎ＊Ｃ＋Ｘ
		Ｌ　＝　Ｎ＊Ｃ－Ｘ
		

实现：

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


// 回文数组 ？ 回文字符串


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