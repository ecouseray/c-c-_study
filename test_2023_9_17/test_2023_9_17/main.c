#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

// �ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����
// ���Ӷ���
// eg : ��
//    : ��
// �������Ӷ��󣬾�Ҫʹ�õ��ṹ��
// 
//

//struct Peo// ��������ͣ��ͺ�int��doubleһ����
//{
//	char name[20];
//	char sex[10];
//	char tel[15];
//	double high;
//};
//}p1, p2; // �����p1 �� p2 ������ȫ�ֽṹ�����

// ����  ----------------------  �ṹ�����
//  ��   ---------------------   ����
// ͼֽ  ----------------------  ����


// �ṹ������ں����ڶ��壬���Ƕ����ֻ���ڸú�����ʹ�á�
// һ�㲻������д
//int main()
//{
//	struct Peo p1;
//	return 0;
//}

// �ṹ���ڳ�Ա�����ǣ����������顢ָ�롢�ṹ��


//struct Peo
//{
//	char name[20];
//	char sex[10];
//	char tel[15];
//	double high;
//};
//
//struct Stu
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//int main()
//{
//	struct Peo p1 = { "����","��","18888888888", 178.2 };
//	struct Stu s1 = { {"����","��","18888888888"}, 100, 3.14f };
//	return 0;
//}

// �ṹ�崫��
// ����ַ           Ч�ʸ���
// ������������    ��Ϊ�˷ѿռ��ʱ��
//
//struct Peo
//{
//	char name[20];
//	char ID[20];
//	char sex[10];
//	char address[64];
//};
//void printStruct1(struct Peo* pTheStruct)
//{
//	printf("%s\n%s\n%s\n%s\n", pTheStruct->name, pTheStruct->ID, pTheStruct->sex, pTheStruct->address);
//}
//void printStruct2(struct Peo theStruct)
//{
//	printf("%s\n%s\n%s\n%s\n", theStruct.name, theStruct.ID, theStruct.sex, theStruct.address);
//}
//int main()
//{
//	struct Peo yzk = { "yzk", "622301200000000000", "��", "�����" };
//	printStruct1(&yzk);
//	printStruct2(yzk);
//	return 0;
//}


// ���������1�ĸ���
// �õ�ʮ���Ƶ�ÿһλ�����ǵĲ����� %10 /10,��ô�õ��������е�ÿһλ���ǿ�����Ȳ�����%2��/2  
//
//


//int countNumOf1(unsigned int n)
////int countNumOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//int countNumOf1(int n)
//{
//	// n & 1  == 1 ˵�����һλ��������1�� == 0 ˵�����һλ��������0
//	int count;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1) // ��һ����ôд�� ��n>>iλ����0��ʼ�� ֮�� & 1��������Ȳ����� 1
//		{
//			count++;
//		}
//	}
//}



// n = 15
// n = n&(n-1) // ��n�Ķ��������������ұߵ�1��ȥ����
// 1111 n
// 1110 n - 1
// 1110 n
//
// 1110 n
// 1101 n -1
// 1100 n 
//


// һ�ֺ�����Ľⷨ 
//  
//int countNumOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//���һλ�����0��-1֮����ǰ��һλ
//		count++;
//	}
//	return count;
//}

// ȷ��һ�����ǲ���2��n�η�
// 2 ^ 1 = 10
// 2 ^ 2 = 100
// Ҫ�Ƕ���n�η������Ķ�����������һ��ֻ��һ��1 
//
//if ((n & n -1) == 0)
// ������ط� n & n - 1 ��ȥ��һ�� 1 ��ֻҪ���Ľ��Ϊ 0 ˵�������һ����2��n�η�


// ���������������������ж���λ��ͬ
// �õ�ÿһλ�����ƣ�֮��Ƚ�
// ^ ֮������ÿһλ�����м���1 n & n - 1



//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//		printf("%d ", (num >> i) & 1);
//}