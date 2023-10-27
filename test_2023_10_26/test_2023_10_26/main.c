/*

27.�Ƴ�Ԫ��

˼·��
    ����ָ��(�±�)(src, dst)����ʼʱͬʱָ������ĵ�һ��Ԫ�أ���src��ָ���Ԫ����val�Ƚϣ�
    �������ͬ����srcָ��λ��Ԫ�ؿ���dstָ���λ�ã�֮��src��dstָ������ߣ�
    �����ͬ����srcֱ�������
    (srcһֱ����ߣ������������飬dstֻ��������λ���Ͽ���Ԫ�ز������)

    ����ǿ����飬ֱ�ӷ���

    ����ֵ������dst

ʵ�֣�
int removeElement(int* nums, int numsSize, int val) {
    int src = 0, dst = 0;
    // ���Ϊ�����飬������ѭ����ֱ�ӷ���
    while (src < numsSize)
    {
        if (nums[src] != val)
        {
            nums[dst] = nums[src];
            src++, dst++;
        }
        else
        {
            src++;
        }
    }
    return dst;
}

*/

/*

26.ɾ�����������е���ͬԪ��

˼·��
    ����ǿ�����ֱ�ӷ��أ�

    ������һ���˼·��ʹ������ָ��(�±�)(dst:������...��cur:��ǰԪ�ء�prev:ǰһ��Ԫ��)
    ��cur��prveԪ����ȣ�
    �����ͬ��cur��prve����ƶ���
    �������ͬ������prve����Ԫ�ص�dst����֮��cur��prve��dst�����ƶ�

    ���������
        ���һ��Ԫ�أ������ǰһ��Ԫ�ز���ͬ�Ļ���û�а취������dst��
        ���һ��Ԫ�أ������ǰһ��Ԫ����ͬ�Ļ���
        ��Ȼcurָ���Ѿ�Խ�磬������Ȼ���Խ�Ԫ�ؿ�����dst��(Խ��֮�󲻽�����(������))

ʵ�֣�
int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0)
        return 0;
    int prev = 0, cur = 1, dst = 0;
    while(cur < numsSize)
    {
        if (nums[prev] == nums[cur])
        {
            prev++, cur++;             
        }
        else
        {
            nums[dst] = nums[prev];
            prev++, cur++, dst++; 
        }
    }
    // �����������
    nums[dst] = nums[prev];
    dst++, prev++;
    return dst;
}

*/

/*

989.������ʽ�����μӷ�
    
˼·��
    numsSize ���� �����Ӧ����������ĳ���
    ���������ȼ����k��λ��
    ����ֵ�ĳ��Ⱦ��ǣ�numsSize �� k �нϴ�λ�� + 1

    �ѵ㣺
        ���ʱ��λ(��λ����������ǰ���һλ��λ)

ʵ�֣�
int* addToArrayForm(int* num, int numSize, int k, int* returnSize){ 
    int kTmp = k;
    int kSize = 1;
    // 134
    while(kTmp / 10)
    {
        ++kSize;
        kTmp /= 10;
    }

    int len = numSize > kSize ? numSize : kSize;
    int* retArr = (int*)malloc(sizeof(int) * (len + 1));

    int Arri = numSize - 1; // ���������������¼����ʽ������±��
    // ������һ������ + һ�����飬���������������ӣ��������飬��������������������

    // Arri[]
    // k

    int reti = 0; // �������������¼���������е��±�
    int nextNum = 0; // ��λ
    while(len--)
    {
        // Ϊʲô��ֱ����ret�ĵط���num[Arri] + k % 10 + nextNum
        // ��������ܳ�����������̣ܶ�����ͻ���ǰ(ջ����ջ��)Խ�����
        // Ĭ��Ϊ0����ArriΪ0֮���´��ټӵ�ʱ��Ͳ���ʹ�������е�ֵ�ˣ�����Ĭ�ϵ�a�䵱�������һλ
        int a = 0;
        if (Arri >= 0)
        {
            a = num[Arri];
            Arri--;
        }

        // ����������ÿһλ���֮���ֵ
        int ret = a + k % 10 + nextNum;
        //int ret = num[Arri] + k % 10;
        
        k /= 10;
        // ˳�ŷţ�֮������һ��,��Ϊnλ��+nλ���п��ܼӳ���n+1λ��
        if (ret > 9)
        {
            nextNum = 1;
            ret -= 10; 
        }
        else
        {
            nextNum = 0;
        }

        retArr[reti] = ret;
        reti++;
    }

    // �������������:ǰ��ѭ��������len�Σ�������λ��λ�������Ļ�����û�м��㵽
    if(nextNum == 1)
    {
        retArr[reti] = 1;
        reti++;
    }

    // ����
    int left = 0, right = reti - 1;
    while(left < right)
    {
        int tmp = retArr[left];
        retArr[left] = retArr[right];
        retArr[right] = tmp;
        left++, right--;
    }

    *returnSize = reti;
    return retArr;
}
    
*/

/*

206.��ת����

˼·��
    ����һ��
        ʹ������ָ��
        ��һ��ָ��ָ��գ��ڶ���ָ��ָ��ͷ�ڵ㣬������ָ��ָ��ͷ�ڵ����һ��Ԫ��(Ŀ���Ƿ�ֹ��ʧ)
        �õڶ���ָ��ָ���һ��ָ�룬֮�����
        ��һ��ָ�� = �ڶ���ָ�� �ڶ���ָ�� = ������ָ�룬 ������ָ�� = ������ָ���next�ڵ�
    ��������
        ͷ���˼·���
        ����һ��ָ����Ϊ��ͷ��ԭ�������ó���һ��һ�㣬ͷ���ͷ�ϣ�֮���ò���Ľڵ���Ϊ��ͷ

ʵ�֣�
struct ListNode* reverseList(struct ListNode* head){
    if (head || head->next == NULL)
        return head;

    struct ListNode* prve = NULL;
    struct ListNode* cur = head;
    struct ListNode* next = head->next;
    while(cur != NULL)
    {
        prve = cur;
        cur = next;
        if (next != NULL)
            next = next->next;
    }
}

struct ListNode* reverseList(struct ListNode* head){

    struct ListNode* newHead = NULL;
    struct ListNode* cur = head;

    // ע��㣺����ĵ�����ָ�룬�����Զ��������棬��Ϊ������������棬����ǿ�ָ��ֱ�Ӿͱ���
    while (cur != NULL)
    {
    struct ListNode* next = cur->next;
        cur->next = newHead;
        newHead = cur;
        cur = next;
    }

  return newHead;
}
*/

/*

203.�Ƴ�����Ԫ��

˼·��
    ������Ҫ����ָ�룬��¼Ҫɾ���Ľڵ����һ���ڵ�
    ��Ϊ��������������Կ��Ը���������head->val�жϣ������ɾ����Ԫ�ؾ�ֱ�������

    �����������һ��Ԫ�ؾ���Ҫɾ����Ԫ��

ʵ�֣�
typedef struct ListNode Node;
struct ListNode* removeElements(struct ListNode* head, int val){
    Node* prev = NULL, *cur = head;

    while(cur != NULL)
    {
        if(cur->val == val)
        {
            if (cur == head)
            {
                head = head->next;
                free(cur);
                cur = head;
            }
            else
            {
                Node* next = cur->next;
                prev->next = cur->next;
                free(cur);
                cur = next;

            }
        }
        else 
        {
            prev = cur;
            cur = cur->next;
        }       
    }
    return head;
}

*/

/*

876.������м�ڵ�

˼·��
    ����ָ�룬һ��ָ����������һ��ָ����һ��������������NULL�ˣ���һ���ľ͵��м���

    ���������ż�����ڵ���������ڵ㣬���Խ���������tail == NULL || tail->next==NULL

ʵ�֣�
typedef struct ListNode Node;
struct ListNode* middleNode(struct ListNode* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

*/

/*

�����������k��Ԫ��

˼·��
    ����ָ��(Ҳ���ǿ���ָ��)���ÿ�ָ�룬����ǰ��k����֮������ָ��һ����
    ����ָ�� == NULL ʱ����ָ���ָ���˵�����k��Ԫ��

    �������������x��Ԫ�أ� k > x

ʵ�֣�

    ListNode* FindKthToTail(ListNode* pListHead, int k)
    ListNode* slow = pListHead, *fast = pListHead;
    while(k--)
    {
        if (fast != NULL)
            fast = fast->next;
        else
            return NULL;
    }
    while(fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
    
*/

/*

21.�ϲ�������������

˼·��
    ����ָ�룬һ��ָ����ͷ�����������ֱ�ָ���������������ͷ�ڵ�
    �Ƚ����������Ԫ�أ�С��β�嵽��ͷ��

    ע��㣺��Ҫ����С����Ϊͷͷ�ڵ�

    �����Ż����ڱ�λ��ͷ�ڵ�

ʵ�֣�
typedef struct ListNode Node;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    Node* head = NULL, *tail = NULL;
    if (list1->val <= list2->val)
    {
        head = tail = list1;
        list1 = list1->next;
        // ���l1����ֻ��һ��Ԫ���أ�
    }
    else
    {
        head = tail = list2;
        list2 = list2->next;
        // ���l2����ֻ��һ��Ԫ���أ�
    }
    while(list1 && list2)
    {
        if (list1->val <= list2->val)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if (list1)
        tail->next = list1;
    else if(list2)
        tail->next = list2;
    return head;
}

�Ż�ʵ�֣�
typedef struct ListNode Node;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    Node* head, *tail = (Node*)malloc(sizeof(Node));

    while(list1 && list2)
    {
        if (list1->val <= list2->val)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if (list1)
        tail->next = list1;
    else if(list2)
        tail->next = list2;

    Node* tmpHead = Head->next;
    free(head);
    free(tail);
    return tmpHead;
    //return head;
}

*/


/*

��ָOffer - 56 ������ֻ����һ��

˼·��
    ���е�������򣬽����ֻ������һ�ε����������Ľ��
    ���飺�������������Ľ���Ķ�����λ���(���������һ��1��pos)
    �����pos���֮��Ϊ1Ϊһ�飬Ϊ0Ϊ��һ�飬���������������
    ����Ľ���ֱ�������ֻ����һ�ε���

ʵ�֣�

int* singleNumber(int* nums, int numsSize, int* returnSize){
    int* pret = calloc(2, sizeof(int));

    int ret = 0;
    for(int i = 0; i < numsSize; ++i)
    {
        ret ^= nums[i];
    }

    int pos = 0;

    for(pos = 0; pos < 32; ++pos)
    {
        if (((ret >> pos) & 1) == 1)
            break;
    }

    for(int i = 0; i < numsSize; ++i)
    {
        if ((nums[i] >> pos) & 1 == 1)
        {
            pret[0] ^= nums[i];
        }
        else
        {
            pret[1] ^= nums[i];
        }
    }
    *returnSize = 2;
    return pret;
}

*/



//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n = 5;
//
//    printf("%d\n", (int)pow(10, n));
//    return 0;
//}

//int* printNumbers(int n, int* returnSize) {
//    *returnSize = pow(10, n) - 1;
//    int* ptrArr = (int*)malloc(sizeof(int) * (*returnSize));
//    int i = 0;
//    for (i; i < *returnSize; ++i)
//    {
//        ptrArr[i] = i + 1;
//    }
//    return *ptrArr;
//}

//#include <stdio.h>
//int is_leap_year(int year) {
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//        return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    int month_day[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int year, month, day;
//    while (~scanf("%d %d %d", &year, &month, &day))
//    {
//        int total_day = day;//�Ȱѵ�ǰ�·���������
//        if (is_leap_year(year) && month > 2)
//        { //�����꣬���·ݴ���2�£�����ƽ�������+1
//            total_day += 1;
//        }
//        for (int i = month - 1; i > 0; i--)
//        {
//            total_day += month_day[i];//��ǰ�ۼ�ÿ�µ���������
//        }
//        printf("%d\n", total_day);
//    }
//    return 0;
//}


