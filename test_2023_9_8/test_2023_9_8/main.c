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



// �ö����ƴ�С����ʱ�����ö����ƴյģ����п��ܴպܶ�λ�ղ�����
// �������͵ľ���ԭ��ͬһ������float��double ���ܴ�Ĳ�һ��
// // 12.45
// x.44444444448907974
// x.0100100110110111

// 0.011


// ţ�����У��Բ⹦�ܣ���û���������ݣ�Ĭ������1����

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
//	// for (ѭ�����ӵĳ�ʼ��; ѭ�����ж�����; ѭ�����ӵĵ���)
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

// �����ö��ѭ������ �� ����ͬһ��ѭ��	

//int main()
//{
//	int i = 0;
//	// ������ִ��һ�Σ��ٽ����ж�
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}

// ����n�Ľ׳�
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

// д���� = ��취�����˼ά�� + д���루�����﷨ȥд��

// ����1~10�Ľ׳˺�
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
//	// �Ȳ����ظ�����ǰ��Ľ׳ˣ���ֻʹ����һ��ѭ��
//	return 0;
//}

// ���һ����������Ҫ�õ�֮ǰ����Ľ�����Ǹ���ִ�в�����ʱ�򣬿��Խ�֮ǰ�Ľ���������������ظ�����


// ��һ�����������У�����ĳһ����
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
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
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
//		// ��left �� right ���ر�󣬿��ܻ�����������
//		// �����
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
//			printf("�±꣺%d\n", mid);
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
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������֤���ٴ�����\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("�����������Σ������Զ��˳�\n");
//	}
//	return 0;
//}


// ������С��Ϸ
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("******   1����ʼ��Ϸ   ********\n");
//	printf("******   0���˳���Ϸ   ********\n");
//	printf("*******************************\n");
//}
//
//void game()
//{
//	// 1.���������
//	// 2.������
//	// ͨ���Ķ�����ʹ��˵������֪����
//	// rand() �� ʹ��֮ǰ��Ҫ srand() ��������һ��
//	// srand() ���� ����������Ҫһ���޷������ε������,��������������������������һ��������
//	// ʱ��� time()  ��ǰʱ�� - �������ʼʱ��
//	// time() �Ĳ��� ����ʹ�ÿ�ָ��  ����ֵ ��һ�� �������͵���
//	
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	printf("������֣�");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("����\n");
//		}
//		else if (guess < ret)
//		{
//			printf("С��\n");
//		}
//		else
//		{
//			printf("����\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
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

// һ��Ӧ�����˳����Ƕ�׵�ѭ��
// �����Կ纯��ʹ��

// �ػ�����

//int main()
//{
//	char input[20] = "";
//	system("shutdown -s -t 180");
//guanji:
//	printf("��ע�⣬180s���ڽ���ػ���������룺�������Ϳ�ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		printf("���ԣ�ȡ���ػ�");
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

// ����
// ����ض������񣬾߱���ԵĶ�����
// �⺯�����Զ���ĺ���
// 
//
// IO����
// �ַ�����������
// �ַ���������
// �ڴ��������
// ʱ��/���ں���
// ��ѧ����
// �����⺯��

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
	printf("����ǰ��%d %d\n", a, b);
	swap(&a, &b);
	printf("������%d %d\n", a, b);
	return 0;
}

// ֵ���� �� ַ����
// ʵ�� �β�
// �β� �� ʵ�ε�һ����ʱ����
// ���β� �� �޸� ����Ӱ��ʵ�Ρ�
