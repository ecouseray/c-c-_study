#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// ��䣺
// 1.���ʽ���
// 2.�����������
// 3.�������
// 4.�������
// 5.�����

// ����������ڿ��Ƴ����ִ�����̣���ʵ�ֳ���ĸ��ֽṹ��ʽ���������ض�����䶨�����ɣ�C�����о��ֿ������

//int main()
//{
//	int a = 1;
//	if (a == 1)
//		printf("hehe\n");
//	if (a = 3)
//		printf("hh\n");
//	if (3 == a)
//	{
//		// Ĭ�� if ���� ��һ����䣬���Ҫ��������� {}
//	}
//
//	a = 19;
//	if (18 < a < 30)
//	{
//		// a > 18 Ϊ�� ���� 1 ��1 < 30 Ϊ��
//		// ͬʱ�������ж��������� && ����
//	}
//	
//	return 0;
//}


// ���� else ���� 

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
// ������� ʲô���������else ����Է�ʽ �� ��������� if ��ԣ�û�д����ŵ�����£�������ʲô���������

// == ���д�������ұ�д����������дһ�� = �� �ж� д�� ��ֵ

// �ж�һ�����Ƿ�������

//int main()
//{
//	int a = 0;
//	scanf("%d" ,&a);
//	if (1 == (a % 2))
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//	return 0;
//}

// ��� 1 - 100 �ĵ�����

//int main()
//{
//	//int i = 0;
//	//while (i <= 100)
//	//{
//	//	if (1 == (i % 2))
//	//	{
//	//		printf("%2d\n", i);
//	//	}
//	//	i++;
//	//}
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	case 3:
//		printf("3\n"); 
//		break;
//	case 4:
//		printf("4\n");
//		break;
//	case 5:
//		printf("5\n");
//		break;
//	case 6:
//		printf("6\n");
//		break;
//	case 7:
//		printf("7\n");
//		break;
//	default:
//		printf("err\n");
//		break;
//	}
//	return 0;
//}
// case ��������� ���γ������ʽ

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("weekday\n");
//		break;
//	case 2:
//		printf("weekday\n");
//		break;
//	case 3:
//		printf("weekday\n");
//		break;
//	case 4:
//		printf("weekday\n");
//		break;
//	case 5:
//		printf("weekday\n");;
//		break;
//	case 6:
//		printf("weekend\n");
//		break;
//	case 7:
//		printf("weekend\n");;
//		break;
//	default:
//		printf("err\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:	
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");;
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");;
//		break;
//	default:
//		printf("err\n");
//		break;
//	}
//	return 0;
//}
// ���߼���Ҫ��ʱ��case������Բ���break;��ɶ�� ֵ ��Ӧ һ��case
// case ���� ���Է��ַ� ����Ϊ�ַ��洢�ϱ����Ǵ洢����ASCII��ֵ��ASCIIҲ����������
// char ���� �ڹ����ʱ��Ҳ������

// switch �е� case �У�����Ƕ��һ�� switch ���


// ------------------------------------------------------------------------------------------------------------------

// ѭ�����

//int main()
//{
//	int i = 0;
//	while (EOF != scanf("%d", &i))
//	{
//		if (1 == (i % 2))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

// while (���ʽ)  
// һ�������жϱ��ʽ�����ʽΪ�棬����ѭ����ѭ������ִ���꣬���жϱ��ʽ...
// break �˳�ѭ��

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
// continue �������� ѭ���� �ں���Ķ�����ֱ��ȥ�ж���������Ҫ��Ҫ������һ��ѭ��

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		// 2 3 4 6 7 8 9 10 11
//	}
//	return 0;
//}

// break��������ֹѭ����continue����������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ���ж�


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
// Ĭ�ϻ��н��ͣ�
// ���뻺�����ڣ�a \n 
// ��һ�ζ��� a ����һ��ѭ�� ���� \n
// 
// ����������������
// 
// stdin ��׼���룬 ����

// getchar  putchar