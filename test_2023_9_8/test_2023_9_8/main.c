#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

//int main()
//{
//	int arr[] = { 67, 98, 87 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	while (i < sz)
//	{
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0, month = 0, day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	
//	printf("year = %d\n" ,year);
//	printf("month = %02d\n" ,month);
//	printf("year = %02d\n" ,day);
//	return 0;
//}



// 用二进制存小数的时候，是用二进制凑的，很有可能凑很多位凑不到，
// 但浮点型的精度原因，同一个数，float和double 可能存的不一样
// // 12.45
// x.44444444448907974
// x.0100100110110111

// 0.011


// 牛客网中，自测功能，若没有输入内容，默认输入1即可

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("%d\n", (a > b ? a : b) > (c > d ? c : d) ? (a > b ? a : b) : (c > d ? c : d));
//
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 0;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int max = n;
//	while (i < 3)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	float V = 0.0f;
//	float R = 0.0f;
//	double PI = 3.1415926; 
//	scanf("%f", &R);
//	V = (4 / 3.0f) * PI * R * R * R;
//	printf("%.3f\n", V);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	// for (循环因子的初始化; 循环的判断条件; 循环因子的调整)
//	for (int m = 0; m < 10; m++)
//	{
//		printf("%d\n", m);
//	}
//
//	return 0;
//}

//   *
//  ***
// *****

//int main()
//{
//	int x = 0;
//	int z = 1;
//	scanf("%d", &x);
//	int x1 = x;
//	for (int i= 0; i < x1; i++)
//	{
//		for (int m = 0; m < x; m++)
//		{
//			printf(" ");
//		}
//		for (int m = 0; m < z; m++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--;
//		z += 2;
//	}
//	x = 2;
//	z -= 4;
//	for (int i = 0; i < x1 - 1; i++)
//	{
//		for (int m = 0; m < x; m++)
//		{
//			printf(" ");
//		}
//		x++;
//		for (int m = 0; m < z; m++)
//		{
//			printf("*");
//		}
//		z -= 2;
//		printf("\n");
//	}
//	return 0;
//}

// 可以用多个循环因子 来 控制同一个循环	

//int main()
//{
//	int i = 0;
//	// 上来先执行一次，再进行判断
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}

// 计算n的阶乘
//int main()
//{
//	int a = 1;
//	int sum = 1;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

// 写代码 = 想办法（编程思维） + 写代码（按照语法去写）

// 计算1~10的阶乘和
//int main()
//{
//	int sum = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret = 1;
//		for (int m = 1; m <= i; m++)
//		{
//			ret *= m;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

// 1
// 1 * 2
// 1 * 2 * 3

//int main()
//{
//	int sum = 0;
//	int ret = 1;
//
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret; 
//	}
//	printf("%d\n", sum);
//	// 既不用重复计算前面的阶乘，又只使用了一个循环
//	return 0;
//}

// 如果一个操作，需要用到之前计算的结果，那个在执行操作的时候，可以将之前的结果存起来，不用重复计算


// 在一个有序数组中，查找某一个数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到！\n");
//	}
//	return 0;
//}

//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char str[] = "a                                                   a";
//	int sz = strlen(str);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		printf("%s", str);
//		char ch1 = str[left];
//		str[left] =  str[left + 1];
//		str[left + 1] = ch1;
//
//		str[right - 1] = str[right];
//		str[right] = '\0';
//
//		left++, right--;
//		printf("\n");
//		Sleep(430);
//		system("cls");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 3;
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//		// 若left 和 right 都特别大，可能会出现溢出问题
//		// 解决：
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("下标：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//#include <stdlib.h>
//#include <Windows.h>
//int main()
//{
//	char arr1[] = "welcome to the hack!!@";
//	char arr2[] = "######################";
//
//	//printf("%s", arr2);
//	//Sleep(900);
//	//system("cls");
//
//	int sz = strlen(arr2);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++, right--;
//		printf("%s", arr2);
//		Sleep(900);
//		system("cls");
//		//printf("\n");
//	}
//	printf("%s", arr1);
//
//	return 0;
//}
// 
// 
// 
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = "HelloWorld";
//	char input[20] = { 0 };
//	
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", input);
//		if (strcmp(password, input) == 0)
//		{
//			printf("密码正确：登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请验证后再次输入\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("连续输入三次，程序自动退出\n");
//	}
//	return 0;
//}


// 猜数字小游戏
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("******   1、开始游戏   ********\n");
//	printf("******   0、退出游戏   ********\n");
//	printf("*******************************\n");
//}
//
//void game()
//{
//	// 1.生成随机数
//	// 2.猜数字
//	// 通过阅读函数使用说明我们知道，
//	// rand() 在 使用之前需要 srand() 函数设置一下
//	// srand() 函数 的括号中需要一个无符号整形的随机数,这个数字若不是随机的他会生成一样的数字
//	// 时间戳 time()  当前时间 - 计算机起始时间
//	// time() 的参数 可以使用空指针  返回值 是一个 整数类型的数
//	
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	printf("请猜数字：");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("小了\n");
//		}
//		else
//		{
//			printf("对啦\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//
//}


// goto 
//int main()
//{
//a:
//	printf("haha\n");
//	printf("hehe\n");
//	goto a;
//	return 0;
//}

// 一般应用是退出深层嵌套的循环
// 不可以跨函数使用

// 关机程序

//int main()
//{
//	char input[20] = "";
//	system("shutdown -s -t 180");
//guanji:
//	printf("请注意，180s，内将会关机，如果输入：我是猪，就可取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		printf("可以，取消关机");
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("6\n");
//		goto guanji;
//	}
//	return 0;
//}


// ===============================================================================================================

// 函数
// 完成特定的任务，具备相对的独立性
// 库函数，自定义的函数
// 
//
// IO函数
// 字符串操作函数
// 字符操作函数
// 内存操作函数
// 时间/日期函数
// 数学函数
// 其他库函数

void swap(int* a, int* b)
{
	int x = *a;
	*a = *b;
	*b = x;
	return;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：%d %d\n", a, b);
	swap(&a, &b);
	printf("交换后：%d %d\n", a, b);
	return 0;
}

// 值传递 、 址传递
// 实参 形参
// 形参 是 实参的一份临时拷贝
// 对形参 的 修改 不会影响实参。
