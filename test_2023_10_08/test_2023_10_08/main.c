

//#include <stdio.h>
//
//int main() {
//    float kg = 0.0f;
//    char key = 0;
//    int ret = 0;
//    scanf("%f %c", &kg, &key);
//
//    if (kg <= 1)
//    {
//        ret = 20;
//    }
//    else
//    {
//        ret = 20 + (((int)(kg += 0.99)) - 1);
//    }
//    if (key == 'y')
//    {
//        printf("%d\n", ret + 5);
//    }
//    else
//    {
//        printf("%d\n", ret);
//    }
//    return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//    int x, y, x1, y1;
//    scanf("%d %d", &x, &y);
//    scanf("%d %d", &x1, &y1);
//    if (x1 == x)
//        y1 > y ? printf("u") : printf("d");
//    else
//        x1 > x ? printf("r") : printf("l");
//    return 0;
//}



// 一个字符串中的每一个字符与其余所有字符的比较枚举
// 2曾循环

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[1024] = "Hello World!";
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < strlen(str); i++)
//	{
//		count = 0;
//		int j = 0;
//		for (j = 0; j < strlen(str); j++)
//		{
//			if (str[i] == str[j])
//				count++;
//		}
//		printf("%c 出现了 %d 次", str[i], count);
//		printf("\n");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main() {
//    int maxn = 0, minn = 9, sum = 0;
//    int i, j, m, flag = 1; //m=maxn-minn
//    char ch[10] = { 0 };
//    scanf("%s", &ch);
//    for (i = 0; i < strlen(ch); i++) 
//    {
//        sum = 0;
//        for (j = 0; j < strlen(ch); j++) 
//        {
//            if (ch[i] == ch[j])
//                sum++;
//        }
//        if (sum > maxn) 
//        {
//
//            maxn = sum;
//        }
//        if (sum < minn) 
//        {
//            minn = sum;
//        }
//    }
//
//
//
//    m = maxn - minn;
//    //下面判断m是不是素数
//    for (i = 2; i < m; i++)
//    {
//        if (m % i == 0)  //除了1和本身
//            flag = 0;
//    }
//    if (flag == 1 && m != 1 && m != 0)
//    {
//        printf("Lucky Word\n%d", m);
//    }
//    else
//    {
//        m = 0;
//        printf("No Answer\n%d", m);
//    }
//
//}




//int missingNumber(int* nums, int numsSize) {
//
//    // int i = 0;
//    // int sum = 0;
//    // for (i = 1; i <= numsSize; i++)
//    // {
//    //   sum += i;
//    // }
//
//    // for (i = 0; i < numsSize; i++)
//    // {
//    //   sum -= nums[i];
//    // }
//    // return sum;
//
//
//
//    int i = 0;
//    int ret = 0;
//    for (i = 0; i <= numsSize; i++)
//    {
//        ret ^= i;
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        ret ^= nums[i];
//    }
//    // a ^ a = 0
//    // 异或符合交换律
//    return ret;
//}
//
//
//int main()
//{
//    printf("HelloWorld!\n");
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	int num[2];
//	int num_i = 0;
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count != 2)
//		{
//			num[num_i] = arr[i];
//			num_i++;
//		}
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}
#include <stdio.h>

void rotate(int* nums, int numsSize, int k) {
    int left = 0;
    

    for (int i = 0; i < k; i++)
    {
        int right = numsSize - 1;
        int tmp = nums[right];
        for (right; right > left; right--)
        {
            nums[right] = nums[right - 1];
        }
        nums[left] = tmp;
    }

}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7 };
    rotate(arr, sizeof(arr) / sizeof(arr[0]), 3);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        printf("%d ", arr[i]);
    return 0;
}