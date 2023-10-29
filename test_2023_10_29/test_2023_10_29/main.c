/*

138. �������ĸ���

˼·��
	��Ϊ���ָ���Ե�ʣ����Ǻ���֪�����ָ��ָ��Ľڵ������ǵ�ǰ�ڵ��֮ǰ����֮��
	1.�����ڵ㣬����ԭ�ڵ�ĺ���
	2.�������ڵ��random
	�������ڵ㶼��ԭ�ڵ�ĺ��棬���Կ����ڵ��random�ڵ����ԭ�ڵ��random�ڵ�ĺ��棩
	3.������������

ʵ�֣�
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
    // ������ط������������ԭ�������������

    // ����random
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

147. ��������в�������

˼·��
    �Ƚ�ԭ����ĵ�һ��Ԫ������������ΪsortHead
    ֮���ٴ�head����һ���ڵ㿪ʼ��������sortHead�Ƚϣ����С�ھ�ֱ��ͷ��
    ������ڽ����Ƚϣ�����ط��ʹ���һ���м�����β��
    head����һ���ڵ�cur��Ϊ��������ߣ���Ҫ������cur����һ���ڵ�next��
    ֱ��cur == NULL ��ֹͣѭ��

ʵ�֣�

typedef struct ListNode ListNode;
struct ListNode* insertionSortList(struct ListNode* head){
    if(head == NULL || head->next == NULL)
        return head;

    //����������Ԫ������Ҳ������
    ListNode* sortHead = head;
    ListNode* cur = head->next;
    sortHead->next = NULL;

    while(cur)
    {
        ListNode* next = cur->next;
        // ��cur���뵽sorthead�����У����ұ�������

        if (cur->val <= sortHead->val)
        {
            // ������ͷ��
            cur->next = sortHead;
            sortHead = cur;
        }
        else
        {
        // �������м�����β������
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
            // ����ط���β��
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

������ȫȥ��
    
˼·��
    cur �� next�Ƚϣ���ͬ����ƶ�����ͬ��next����ߣ�����ͬ����ɾ����prev->next = next; cur = next;

ʵ�֣�

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
//    printf("ԭʼ���Ķ����Ʊ�ʾ: %d\n", num);
//    printf("������żλ��Ľ��: %d\n", SWAP_BITS(num));
//
//    return 0;
//}