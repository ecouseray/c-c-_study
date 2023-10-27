/*

27.移除元素

思路：
    两个指针(下标)(src, dst)，初始时同时指向数组的第一个元素，用src所指向的元素与val比较，
    如果不相同，则将src指向位置元素拷入dst指向的位置，之后src和dst指针向后走；
    如果相同，则src直接向后走
    (src一直向后走，遍历整个数组，dst只有在向其位置上拷贝元素才向后走)

    如果是空数组，直接返回

    返回值，返回dst

实现：
int removeElement(int* nums, int numsSize, int val) {
    int src = 0, dst = 0;
    // 如果为空数组，不进入循环，直接返回
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

26.删除排序数组中的相同元素

思路：
    如果是空数组直接返回；

    借助上一题的思路；使用三个指针(下标)(dst:拷贝到...、cur:当前元素、prev:前一个元素)
    用cur、prve元素相比，
    如果相同，cur和prve向后移动；
    如果不相同，拷贝prve处的元素到dst处，之后cur、prve、dst后向移动

    特殊情况：
        最后一个元素，如果和前一个元素不相同的话，没有办法拷贝到dst处
        最后一个元素，如果和前一个元素相同的话，
        虽然cur指针已经越界，但是任然可以将元素拷贝到dst处(越界之后不解引用(不操作))

实现：
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
    // 特殊情况处理
    nums[dst] = nums[prev];
    dst++, prev++;
    return dst;
}

*/

/*

989.数组形式的整形加法
    
思路：
    numsSize 就是 数组对应的这个整数的长度
    所以上来先计算出k的位数
    返回值的长度就是：numsSize 和 k 中较大位数 + 1

    难点：
        相加时进位(进位进出来，最前面的一位进位)

实现：
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

    int Arri = numSize - 1; // 这个变量是用来记录计算式数组的下标的
    // 这里是一个整数 + 一个数组，如果是两个大数相加，都是数组，可以用两个变量来控制

    // Arri[]
    // k

    int reti = 0; // 这个变量用来记录返回数组中的下标
    int nextNum = 0; // 进位
    while(len--)
    {
        // 为什么不直接在ret的地方让num[Arri] + k % 10 + nextNum
        // 如果整数很长，但是数组很短，数组就会向前(栈上向栈顶)越界访问
        // 默认为0，当Arri为0之后，下次再加的时候就不是使用数组中的值了，就是默认的a充当数组的下一位
        int a = 0;
        if (Arri >= 0)
        {
            a = num[Arri];
            Arri--;
        }

        // 这个变量存放每一位相加之后的值
        int ret = a + k % 10 + nextNum;
        //int ret = num[Arri] + k % 10;
        
        k /= 10;
        // 顺着放，之后逆置一下,因为n位数+n位数有可能加出来n+1位数
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

    // 出现这个问题是:前面循环次数是len次，如果最高位进位进出来的话，就没有计算到
    if(nextNum == 1)
    {
        retArr[reti] = 1;
        reti++;
    }

    // 逆置
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

206.反转链表

思路：
    方法一：
        使用三个指针
        第一个指针指向空，第二个指针指向头节点，第三个指针指向头节点的下一个元素(目的是防止丢失)
        让第二个指针指向第一个指针，之后迭代
        第一个指针 = 第二个指针 第二个指针 = 第三个指针， 第三个指针 = 第三个指针的next节点
    方法二：
        头插的思路解决
        定义一个指针作为新头，原链表中拿出来一个一点，头差到新头上，之后让插入的节点作为新头

实现：
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

    // 注意点：这里的第三个指针，不可以定义在外面，因为如果定义在外面，如果是空指针直接就崩了
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

203.移除链表元素

思路：
    最少需要两个指针，记录要删除的节点和上一个节点
    因为有特殊情况，所以可以刚上来就让head->val判断，如果是删除的元素就直接向后走

    特殊情况：第一个元素就是要删除的元素

实现：
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

876.链表的中间节点

思路：
    快慢指针，一个指针走两步，一个指针走一步，走两步到到NULL了，走一步的就到中间了

    两种情况：偶数个节点和奇数个节点，所以结束条件是tail == NULL || tail->next==NULL

实现：
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

输出链表倒数第k个元素

思路：
    两个指针(也算是快慢指针)，让快指针，现象前走k步，之后两个指针一起走
    当快指针 == NULL 时，慢指针就指向了倒数底k个元素

    特殊情况：链表x个元素， k > x

实现：

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

21.合并两个有序链表

思路：
    三个指针，一个指向新头，另外两个分别指向两个有序链表的头节点
    比较两个链表的元素，小的尾插到新头处

    注意点：需要将较小的现为头头节点

    可以优化，哨兵位的头节点

实现：
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
        // 如果l1里面只有一个元素呢？
    }
    else
    {
        head = tail = list2;
        list2 = list2->next;
        // 如果l2里面只有一个元素呢？
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

优化实现：
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

剑指Offer - 56 数组中只出现一次

思路：
    所有的数先异或，结果是只出现了一次的两个数异或的结果
    分组：按照两个数异或的结果的二进制位异或(从右向左第一个1的pos)
    如果和pos异或之后为1为一组，为0为另一组，再异或到整个数组上
    两组的结果分别是两个只出现一次的数

实现：

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
//        int total_day = day;//先把当前月份天数加上
//        if (is_leap_year(year) && month > 2)
//        { //若闰年，且月份大于2月，则在平年基础上+1
//            total_day += 1;
//        }
//        for (int i = month - 1; i > 0; i--)
//        {
//            total_day += month_day[i];//向前累加每月的天数即可
//        }
//        printf("%d\n", total_day);
//    }
//    return 0;
//}


