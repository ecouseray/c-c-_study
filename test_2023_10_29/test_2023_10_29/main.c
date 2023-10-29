/*

138. 随机链表的复制

思路：
	因为随机指针的缘故，我们很难知道随机指针指向的节点在我们当前节点的之前还是之后
	1.拷贝节点，链到原节点的后面
	2.处理拷贝节点的random
	（拷贝节点都在原节点的后面，所以拷贝节点的random节点就在原节点的random节点的后面）
	3.拆解出复制链表

实现：
typedef struct Node Node;
struct Node* copyRandomList(struct Node* head) {
    if (head == NULL)
        return NULL;

    Node* cur = head;
    while(cur)
    {
        Node* copy = (Node*)malloc(sizeof(Node));
        copy->next = NULL;
        copy->random = NULL;
        copy->val = cur->val;

        Node* next = cur->next;
        cur->next = copy;
        copy->next = next;

        cur = next;
    }
    // 到这个地方，拷贝链表和原链表就连起来了

    // 处理random
    cur = head;
    while(cur)
    {
        Node* copy = cur->next;
        if (cur->random != NULL)
            copy->random = cur->random->next;
        else
            copy->random = NULL;


        cur = cur->next->next;
    }

    cur = head;
    Node* copyHead = cur->next;
    while(cur)
    {

        Node* copy = cur->next;
        Node* next = copy->next;

        cur->next = next;
        if (next)
            copy->next = next->next;
        else
            copy->next = NULL;

        cur = next;
    }

    return copyHead;
}

*/

/*

147. 对链表进行插入排序

思路：
    先将原链表的第一个元素拿下来，作为sortHead
    之后再从head的下一个节点开始，拿其与sortHead比较，如果小于就直接头插
    如果大于将向后比较：这个地方就存在一个中间插入和尾插
    head的下一个节点cur，为了能向后走，就要存下来cur的下一个节点next，
    直到cur == NULL 就停止循环

实现：

typedef struct ListNode ListNode;
struct ListNode* insertionSortList(struct ListNode* head){
    if(head == NULL || head->next == NULL)
        return head;

    //到这里，链表的元素最少也是两个
    ListNode* sortHead = head;
    ListNode* cur = head->next;
    sortHead->next = NULL;

    while(cur)
    {
        ListNode* next = cur->next;
        // 把cur插入到sorthead链表中，并且保持有序

        if (cur->val <= sortHead->val)
        {
            // 这里是头插
            cur->next = sortHead;
            sortHead = cur;
        }
        else
        {
        // 这里是中间插入和尾部插入
            ListNode* sortprev = sortHead;
            ListNode* sortCur = sortprev->next;
            while (sortCur)
            {
                if (cur->val <= sortCur->val)
                {
                    sortprev->next = cur;
                    cur->next = sortCur;
                    break;
                }
                else
                {
                    sortprev = sortCur;
                    sortCur = sortCur->next;
                }
            }

            if (sortCur == NULL)
            {
            // 这个地方是尾插
                sortprev->next = cur;
                cur->next = NULL;
            }
        }
        cur = next;
    }
    return sortHead;
}
*/


/*

链表完全去重
    
思路：
    cur 和 next比较，不同向后移动，相同，next向后走，至不同处，删除，prev->next = next; cur = next;

实现：

ListNode* deleteDuplication(ListNode* head)
{
    if (head == NULL || head->next == NULL)
        return head
    ListNode* prev = NULL;
    ListNode* cur = head;
    ListNode* next = cur->next;

    while (next)
    {
        if (cur->val != next->val)
        {
            prev = cur;
            cur = cur->next;
            next = next->next;
        }
        else
        {
            while (next != NULL && cur->val == next->val)
            {
                next = next->next;
            }
            if (prev != NULL)
                prev->next = next;
            else
                head = next;

            while(cur != next)
            {
                ListNode* del = cur;
                cur = cur->next;
                free(del);
            }

            if (next != NULL)
                next = cur->next;
        }
    }
}
*/































//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int cmp(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	qsort(arr, 10, 4, cmp);
//	
//	return 0;
//}

//#include <stdio.h>
//
//#define SWAP_BITS(num) (((num) & 0xAAAAAAAA) >> 1) | (((num) & 0x55555555) << 1)
//
//int main() {
//    int num = -10;  
//    // 1000 0000 0000 0000 0000 0000 0000 1010
//    // 1111 1111 1111 1111 1111 1111 1111 0101
//    // 1111 1111 1111 1111 1111 1111 1111 0110
//
//
//    // 1111 1111 1111 1111 1111 1111 1111 1001
//    // 1000 0000 0000 0000 0000 0000 0000 0110
//    // 1000 0000 0000 0000 0000 0000 0000 0111
//
//    printf("原始数的二进制表示: %d\n", num);
//    printf("交换奇偶位后的结果: %d\n", SWAP_BITS(num));
//
//    return 0;
//}