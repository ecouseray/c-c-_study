#define _CRT_SECURE_NO_WARNINGS 



// memcpy 拷贝两块不同的内存
// 
// memmove 重叠内存之间的数据的拷贝
// 
// C语言标准指出，memcpy 只管拷贝两块不同的内存， 重叠内存之间的数据拷贝交给memmove
// VS2019下 memcpy 也可以用来拷贝重复内存
// 
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}

#include <stdio.h>

// memcmp 内存比较 被比较的第一个， 被比较的第二个，比较多少个字节 
// memset 内存设置 要设置的地址，	要设置为的数，设置多少个


//#include <string.h>
//void* myMemmove(void* dest, const void* src, size_t num)
//{
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 255, 40);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d\n", arr[i]);
//	return 0;
//}


#include <stdio.h>
#include <math.h>

int main()
{
    int input = 0;
    int sum = 0;
    //输入
    scanf("%d", &input);//123
    int i = 0;
    while (input)
    {
        int bit = input % 10;
        if (bit % 2 == 1)
        {
            bit = 1;
        }
        else
        {
            bit = 0;
        }
        sum += bit * pow(10, i++);
        input /= 10;
    }
    printf("%d\n", sum);
    return 0;
}


#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i + j < n - 1)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
//
//
#include <stdio.h>
int main()
{
    //输入
    double price = 0.0;
    int m = 0;
    int d = 0;
    int flag = 0;
    scanf("%lf %d %d %d", &price, &m, &d, &flag);
    //计算
    if (m == 11 && d == 11)
    {
        price = price * 0.7 - flag * 50;
    }
    else if (m == 12 && d == 12)
    {
        price = price * 0.8 - flag * 50;
    }

    //输出
    if (price < 0.0)
        printf("%.2lf\n", 0);
    else
        printf("%.2lf\n", price);

    return 0;
}



int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1) == 1))
						{
							//1 2 3 4 5
							if(a+b+c+d+e == 15 && a*b*c*d*e==120)
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	return 0;
}


int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		//判断
		if ((killer != 'a') + (killer == 'c')
			+ (killer == 'd') + (killer != 'd') == 3)
		{
			printf("%c\n", killer);
		}
	}

	return 0;
}


//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i == j)
				arr[i][j] = 1;
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}


//实现一个函数，可以左旋字符串中的k个字符。
void left_rotate(char arr[], int k)
{
	int i = 0;
	int len = strlen(arr);
	k %= len;
	for (i = 0; i < k; i++)
	{
		//旋转1个字符
		//1
		char tmp = arr[0];
		//2
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		//3
		arr[len - 1] = tmp;
	}
}
	

void reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_rotate(char arr[], int k)
{
	int len = strlen(arr);
	k%=len;
	reverse(arr, arr+k-1);//左
	reverse(arr+k, arr+len-1);//右
	reverse(arr, arr + len-1);//整
}

int main()
{
	char arr[] = "abcdef";//cdefab
	int k = 0;
	scanf("%d", &k);//2
	left_rotate(arr, k);
	printf("%s\n", arr);

	return 0;
}


//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//1 2 3
//4 5 6
//7 8 9
//N

//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	while (x<=r-1 && y>=0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;//找不到
//}
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Point find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct Point p = { -1, -1 };
//	while (x <= r - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;//找不到
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	struct Point ret = find_num(arr, 3, 3, k);
//	printf("%d %d\n", ret.x, ret.y);
//	return 0;
//}


//返回型参数
//
//int find_num(int arr[3][3], int *px, int*py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	*px = -1;
//	*py = -1;
//	return 0;//找不到
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int a = 3;//行
//	int b = 3;//列
//	int ret = find_num(arr, &a, &b, k);
//	if (ret == 1)
//		printf("%d %d\n", a, b);
//	else
//		printf("找不到\n");
//
//
//	scanf("%d", &k);
//	a = 3;
//	b = 3;
//	ret = find_num(arr, &a, &b, k);
//	if (ret == 1)
//		printf("%d %d\n", a, b);
//	else
//		printf("找不到\n");
//	return 0;
//}
//

//
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		
//		if (strcmp(arr2, arr1) == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	//bcdefa
//	//cdefab
//	//defabc
//	//efabcd
//	//fabcde
//	//abcdef
//	char arr2[] = "cdefab";
//	//判断arr2中的字符串是否可以通过arr1中的字符串旋转得到
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("No\n");
//
//	return 0;
//}

//
//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if(ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	//abcdefabcdef
//	//bcdefa
//	//cdefab
//	//defabc
//	//efabcd
//	//fabcde
//	//abcdef
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("No\n");
//
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    //int arr[n][m];//C99中的变长数组
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    //输入
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //输出
//    //列
//    for (i = 0; i < m; i++)
//    {
//        //行
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    //int arr[n][n];
//    int arr[10][10];
//    int i = 0;
//    int j = 0;
//    int flag = 1;//是上三角矩阵
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //判断
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                flag = 0;//不是上三角矩阵
//                goto end;
//            }
//        }
//    }
//end:
//    if (flag == 0)
//        printf("NO\n");
//    else
//        printf("YES\n");
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    int flag1 = 0;
//    int flag2 = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] > arr[i - 1])
//            {
//                flag1 = 1;
//            }
//            else if (arr[i] < arr[i - 1])
//            {
//                flag2 = 1;
//            }
//            else
//            {
//                ;
//            }
//        }
//    }
//    if (flag1 + flag2 <= 1)
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//    return 0;
//}
//