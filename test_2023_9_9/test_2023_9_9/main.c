#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// ʹ�þֲ�������ֵ��һЩ���㣬��������ԭ���ľֲ�����
// ֵ����
// 
// �����Ҫ�޸�ԭ���ľֲ�����
// ַ����

// ʵ�Σ���ʵ���ݸ�������ֵ�������ǳ��������������ʽ��������
// �βΣ��������������ڵı������ں���������ʱ���ʵ�������ŷ����ڴ�ռ䣬����������ͻ�����
// �β�ʵ��������ʵ�ε�һ����ʱ����

// �����ĵ��ã�
// ��ֵ����:���䲻ͬ���ڴ��
// ��ַ����:�ú����뺯����ı���������ϵ


// дһ���������ж�һ�����ǲ�������
// ��ӡ100 ~ 200 ֮�������

// ֻ�ܱ� 1 �� �Լ����� ����
//void judge_sushu()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// �ж�
//		// �ö���i - 1 �Գ�
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (0 == i % j)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//}
//
//int main()
//{
//	judge_sushu();
//	return 0;
//}


// ��һ�����ֲ�������
// m = a * b
// 16 = 2 * 8
//    = 4 * 4
// a �� b �� һ����һ������ <= sqrt(m) ����ƽ��m��
// ��Ϊż���Ȳ����������� ���Կ�����ѭ������ܿ����е�����

// sqrt() ���� ��һ��double���͵�����ƽ��������һ��double ���͵�ֵ��Ҳ���Զ�int���Ϳ�ƽ��

//#include <math.h>
//void judge_sushu()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		// �ж�
//		// �ö���i - 1 �Գ�
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (0 == i % j)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//}
//int main()
//{
//	judge_sushu();
//	return 0;
//}


//#include <math.h>
//int judge_sushu(int i)
//{
//	int flag = 1;
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (0 == i % j)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//
//	if (1 == judge_sushu(input))
//	{
//		printf("��\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int x = a > b ? a : b;
//	int y = a > b ? b : a;
//	if (x % y == 0)
//	{
//		printf("%d �� %d �����Լ��λ:%d\n", a, b, y);
//	}
//	else
//	{
//		for (int i = y; i >= 1; i--)
//		{
//			if (x % i == 0 && 0 == y % i)
//			{
//				printf("%d �� %d �����Լ��λ:%d\n", x, y, i);
//				break;
//			}
//		}
//	}
//	return 0;
//}


// �ܱ������������Ҳ��ܱ�100����
// �ܱ��İ�����
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//int erfenchazhao(int* arr, int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
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
//			return mid;
//		}
//	}	
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	if (-1 != erfenchazhao(arr, sz, k))
//	{
//		printf("�±���:%d\n", erfenchazhao(arr, sz, k));
//	}
//	else
//	{
//		printf("�Ҳ���...\n");
//	}
//	return 0;
//}

// ������Ƕ�׵���
// ��������Ƕ�׵��ã����ǲ�����Ƕ�׶���

// ��������ʽ����  ����  �����ķ���ֵ

//int main()
//{
//	//size_t a = 10;
//	printf("%d", printf("%d", printf("%d", 43)));
//}

// ������д����ֵ��ʱ��Ĭ�Ϸ��������� int
// �����ķ���ֵ��������һ��Ҫ�������

//int main(void)
//{
//	printf("Hello World\n");
//	return 0;
//}


// main ���� ���������в�����  �� ��������

//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}


