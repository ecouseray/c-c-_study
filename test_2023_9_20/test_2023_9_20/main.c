#define _CRT_SECURE_NO_WARNINGS 


//#include <stdio.h>
//
//// ��С������
//int main()
//{
//	int a = 0, b = 0;
//	int num = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	num = b;
//	while (1)
//	{
//		if ((num % a == 0) && (num % b == 0))
//			break;
//		num += b;
//	}
//	printf("%d\n", num);
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//
//void reverse(char* left, char* right)
//{
//    assert(left);
//    assert(right);
//
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[101] = { 0 };
//    //����
//    gets(arr);//I like beijing.
//    //����
//    int len = strlen(arr);
//    //1. ���������ַ���
//    reverse(arr, arr + len - 1);
//    //2. ����ÿ������
//    char* start = arr;
//
//    while (*start)
//    {
//        char* end = start;
//        while (*end != ' ' && *end != '\0')
//        {
//            end++;
//        }
//        reverse(start, end - 1);
//        if (*end != '\0')
//            end++;
//        start = end;
//    }
//
//    //���
//    printf("%s\n", arr);
//
//    return 0;
//}

// release �汾 ��� ��������Ż�
// debug �汾 �ڴ��ʹ�ù����ǣ���ʹ�øߵ�ַ��ʹ�õ͵�ַ
// release �汾 �ڴ��ʹ�ù�����ʹ�õ͵�ַ����ʹ�øߵ�ַ
// VS2019��
//



// ���ݵĴ洢
// �������ͣ�
// tips��
// ��׼�涨��sizeof(long) >= sizeof(int)
// 
// ���Σ�
// char unsigned char  �ַ��ı����ϴ洢���ǣ�ascII�룬��������
// ����:char  signed char  unsigned char
//	    char ������ signed char ���� unsigned char �Ǳ�׼δ����ģ�ȡ���ڱ�������ʵ��
// 
// short
// int
// long
// long long 
// �����е�һЩֵ����û�и�����
// ����λ0��ʾ����������λ1��ʾ����
// 
// 
// ���������壺
// float
// double
// ��ʾС��
// 
// �������ͣ����Զ������� - �����Լ����������µ����ͣ�
// ��������
// int arr1[5]  ����: int [5]
// int arr2[8]  ����: int [8]
// char arr[10] ����: char [10]
// 
// �ṹ������ struct
// ö������ enum
// �������� union
// 
// 
// ָ�����ͣ�
// 
// �����ͣ�
// 
// ��ֵ�в�ͬ�ı�ʾ��ʽ��
// 2����
// 8����
// 10����
// 16����
// ʮ���Ƶ�21
// 0b101010
// 025
// 21
// 0x15
// 
// �����Ķ�������ʽ��ʾ��ʽ��3�֣�
// ��������������ͬ����������������Ҫ����
// ԭ�룺ֱ��ͨ����������ʽд���Ķ��������о���ԭ��
// ���룺ԭ�����λ��������λ��λȡ��
// ���룺���� + 1
// 
// ֻҪ���������ڴ��д�ŵ��ǲ���Ķ���������
// �ڼ����ϵͳ�У���ֵһ���ò�������ʾ�ʹ洢��ԭ�����ڣ�ʹ�ò��룬���Խ�����λ����ֵ��ͳһ����
// ͬʱ���ӷ��ͼ���Ҳ����ͳһ����CPUֻ�мӷ��������⣬������ԭ���໥ת�������������
// ����ͬ�ģ�����Ҫ�����Ӳ����·��(ԭ�� ȡ�� +1 �ɲ���  ���� ȡ�� +1 ��ԭ��)
// 
// 
// ռ�ĸ��ֽڴ�ţ��Ǿͻ���Ƶ�˳���������
// һ�ֽڵ�λ����
// ����ֽ��� �洢 �� ��λ�ֽ�������ݴ���ڵ͵�ַ����λ�ֽ�������ݷ��ڸߵ�ַ
// С���ֽ��� �洢 �� ��λ�ֽ�������ݴ���ڸߵ�ַ����λ�ֽ�������ݷ��ڵ͵�ַ
// 
// 
// 



// ��֤�����Ӳ���Ǵ�˻���С�Σ�
//#include <stdio.h>
//int main()
//{
//	int a = 0x00000001;
//	char* pa = (char*)&a;
//	//��� 00 �� ���
//	//��� 01 �� С��
//	printf("%x\n", *pa);
//	return 0;
//}

//���ʲô��
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

// char ���� 10000000 ��ʾ -128��������㣬ֱ�ӽ�����

#include <stdio.h>
int main()
{
	char a = 0x01223344;
	printf("%d\n", a);

	return 0;
}
