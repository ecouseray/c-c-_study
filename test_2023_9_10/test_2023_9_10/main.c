#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	printf("������Ҫ��׳˵���:>");
//	scanf("%d", &n);
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d�Ľ׳�Ϊ:%d", n, ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	printf("������Ҫ��׳˵����ĺ�:>");
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("Ҫ��׳˵����ĺ�Ϊ%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("����һ���������У�������Ҫ���ҵ���:>");
//	scanf("%d", &k);
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
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
//			printf("���ҵ��������±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
// 
// ʱ�临�Ӷȣ� log��2Ϊ��N�Ķ���
// �������ɣ���ȫ�����������
// N / 2 / 2 / 2 / ... = 1
// N = 2 ^ x    x �ǲ��Ҵ���
// x = log��2Ϊ��N�Ķ���
//  
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <windows.h>
//void menu()
//{
//	printf("******************************************\n");
//	printf("**********     1.��ʼ��Ϸ        *********\n");
//	printf("**********     0.�˳���Ϸ        *********\n");
//	printf("******************************************\n");
//}
//
//int game()
//{
//	int guess = rand() % 100 + 1;
//	int input = 0;
//	printf("���ڲ����� 1 ~ 100 ��һ�����������������Ϸ��ʼ\n");
//	while (1)
//	{
//		scanf("%d", &input);
//		if (input > guess)
//		{
//			printf("�´���\n");
//		}
//		else if (input < guess)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("nb\n");
//			break;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//
//	system("shutdown -s -t 180");
//	printf("ע�⣺180������ĵ��Խ��ػ�\n");
//	printf("��������һ����Ϸ\n");
//
//	menu();
//	printf("��ʼ��Ϸ����ѡ��:>");
//	scanf("%d", &input);
//	int ret = 0;
//	switch(input)
//	{
//	case 1:
//		ret = game();
//		break;
//	case 0:
//		printf("�˳���Ϸ,���ȹػ�\n");
//		break;
//	default:
//		printf("�����������������\n");
//		break;
//	}
//	if (1 == ret)
//	{
//		printf("��ϲ�㣬���أ�");
//		printf("���Թػ���ȡ��\n");
//		system("shutdown -a");
//	}
//	return 0;
//}

// ���ֲ���
// ����BinarySearch��ʱ�临�Ӷȣ�
//int BinarySearch(int* a, int n, int x)
//{
//	assert(a);
//	int begin = 0;
//	int end = n - 1;
//	// [begin, end]��begin��end������ұ����䣬�����=��
//	while (begin <= end)
//	{
//		int mid = begin + ((end - begin) >> 1);
//		if (a[mid] < x)
//			begin = mid + 1;
//		else if (a[mid] > x)
//			end = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
// O(log��2Ϊ��N�Ķ���)


// �ݹ����׳�
//
//long long Fac(size_t N)
//{
//	if (0 == N)
//		return 1;
//
//	return Fac(N - 1) * N;
//}

// �ݹ������μ���ʱ�临�Ӷȣ��ݹ���� * ÿ�εݹ麯���Ĵ���


//long long Fib(size_t N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}


// ===============================================================================================================================

// �����������붨��
//#include "add.h"
// <> һ�����ڰ����⺯���ļ��� "" һ�����ڰ����Լ����ļ�
// <> ��ϵͳ�ļ��в��ң��Ҳ�����ȥ��ǰ�ļ�����
// "" �ӵ���ǰ�ļ��²��ң� �Ҳ�����ȥ��ǰ�ļ����� 
// ������������ֻ�Ǹ������У����������û��Ҫ���������壩
//void add(int x, int y);
//
//int main()
//{
//	return 0;
//}


// �����Ķ��壨�����ľ����������ڻ��ǲ����ڣ�
//void add(int x, int y)
//{
//
//}

// һ��Ҫ���� ����������ʹ��

// 1.��Э���ĽǶ���˵����Ӧ�ð��ļ�д��һ���ļ���
// 2.ģ�黯	xxx.c  xxx.h	

// ����ͷ�ļ����������ǰ� ͷ�ļ��������ȫ����������

// ����Ա �� add.c �� add.h �� ����ɾ�̬�� + ͷ�ļ� ���۸�  ����
// add.lib
// ʹ��
// �� ������� .h �ļ� �� .lib ��̬�⵼��֮��
// pragma comment(lib, "add.lib")

// ===============================================================================================================================

// �ݹ�
// ������ӻ�ֱ�ӵ�������
// һ�ַ�������ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬�ݹ����

// �ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С

// ���룺1234����� 1 2 3 4
// �ݹ�ʵ�֣�
// print(1234)
// print(123) 4
// print(12) 3 4
// print(1) 2 3 4
// 1 2 3 4

// ���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
// ÿ�εݹ����֮��Խ��Խ�ӽ��������������

//void print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	unsigned num = 0;
//	scanf("%u", &num);
//	print(1234);
//	return 0;
//}

// ��д��������������ʱ���������ַ����ĳ��ȡ�

//int main()
//{
//	int ret = strlen("abc");
//	printf("%d", ret);
//	return 0;
//}

//int mystrlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + mystrlen(str + 1);
//	}
//	else {
//		return 0; 
//	}
//	
//}
//int main()
//{
//	printf("%d\n", mystrlen("abc"));
//	return 0;
//}


//int mydigui(int num)
//{
//	if (num > 1)
//		return num * (mydigui(num - 1));
//	else
//		return 1;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", mydigui(num));
//	return 0;
//}

// �ݹ������
// ѭ������һ�ֵ���
// �����ķ�ʽ == �ǵݹ�

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

// �ڵ��� factorial ������ʱ�������Ĳ����Ƚϴ��Ǿͻᱨ�� stack overflow��ջ�����
// ��������Ϣ��
// ϵͳ����������ջ�ռ������޵ģ����������������ѭ�������ߣ����ݹ飩�������п��ܵ���һ
// ֱ����ջ�ռ䣬���ղ���ջ�ռ�ľ���������������������ǳ�Ϊջ���
//int Fib(int n)
//{
//	int c = 0;
//	int a = 1;
//	int b = 1;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	if (n == 1 && 2 == n)
//		c = 1;
//	return 0;
//}
//int main()
//{
//	// 쳲���������
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//	return 0;
//}

// ===============================================================================================================================

// ����ջ֡�Ĵ���������

// 1.�ֲ����� ����δ�����
// 2.Ϊʲô�ֲ�������ֵ�����ֵ
// 3.�������������д��εģ����ε�˳������ô���ģ�
// func(1,2)
// ����ջ���ݣ��������󴫵ݣ�2��ջ��1��ջ����ȡ��ʱ����� 1 �� 2
// 4.�βκ�ʵ����ʲô��ϵ
// ��������ͬ��ֵ
// 5.������������ô������
// 
// 6.�������ý���������ô���з��ص�
// ����ԭ�������ĵ�ַ

// �Ĵ��� eax��ebx��ecx��edx
// �ص��˽� edp �� esp
// ����ջ֡��ⲻ����� esp �� edp �����Ĵ���
// esp �� ebp �����Ĵ��� ��ŵ��ǵ�ַ �� ������ά������ջ֡�ġ�
// ÿһ�������ĵ��ö�Ҫ����һ���ռ䣬��������ռ�����ջ�Ͽ��ٵ� 

// ebp��ջ��ָ�롰��ַָ�롱�� ָ�� �ߵ�ַ   esp��ջ��ָ�룩 ָ�� �͵�ַ

// ��VS2013 �� main����Ҳ�ǿ��Ա���ĺ������õ�
// _tmainCRTStartup
// mainCRTStartup   ��������ģ�����ĵ���main���� 
