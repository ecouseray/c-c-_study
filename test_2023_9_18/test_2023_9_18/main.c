#define _CRT_SECURE_NO_WARNINGS 

// ����ר��
// ʲô��bug��
// ��ʷ�ϵĳ���...
// ʲô�ǵ��ԣ�
// �������ϲ��Ҵ���
// ���ֻ���ټ����������ߵ��������豸�г�������һ������
// ���裺
// 1.���ֳ������Ĵ���
// 2.�Ը��롢�����ȷ�ʽ�Դ�����ж�λ
// 3.ȷ�����������ԭ��
// 4.�����������Ľ���취
// 5.�Գ���������Ը��������²���
// 
// debug��release������	
// ���԰汾
// �����汾
// 
// Windows�����µĵ��ԣ�VS2019��
// ��ݼ���
// F5��ֱ�ӵ���һ���ϵ�λ�ã�
// F9�����û�ȡ���ϵ�
// F10������̣�����������
// F11�����裨��������
// ����֮ǰ��Ҫ���׳�������ôִ�еģ��ڵ��Ե�ʱ�򣬿�ʱ�����Լ�Ԥ��Ĳ���ִ��

//
// 10��ѭ��������˵�����ѭ�������⣺�����ϵ�
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", &arr[i]);
//	}
//	return 0;
//}

// ���ԵĹ����й۲����е�ֵ
// ���Կ�ʼ�󣬵��Դ��ڣ���
//  
// ���鴫��󣬼��Ӵ���ֻ�ܲ鿴һ������
// ������,�۲�ĸ��� ���Ϳ��Թ۲쵽���������
//#include <stdio.h>
//void test2()
//{
//	printf("hello!");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe %d %d\n", i, arr[i]);
//	}
//	return 0;
//}
// �о�������ѭ����ԭ��

// ջ���ڴ�ʹ��ϰ��
// ��ʹ�øߵ�ַ����ʹ�õ͵�ַ
// �����Ĵ����ǴӸߵ�ַ��͵�ַ�����
// ����Ԫ�صĵ�ַ����֮�����±����������ַ���ɵ͵��ߵ�
// ��int i ֮�� int arr
// �������ʵ���Խ�磬�Ϳ��ܻḲ��i�����ܾͻᵼ����ѭ��
// ��C������ȱ�ݡ�


/*
ʲô���Ĵ���������Ĵ��룺
1. ������������
2. bug����
3. Ч�ʸ�
4. �ɶ��Ը�
5. ��ά���Ը�
6. ע������
7. �ĵ���ȫ

������coding���ɣ�
1. ʹ��assert
2. ����ʹ��const
3. �������õı�����
4. ��ӱ�Ҫ��ע��
5. �����������塣

*/
#include <stdio.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++, *src != '\0');
//	*dest = *src;
//}

//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++);
//	
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = "Hello World!";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}

// const ����ָ�����
//  1.const ���� * �����
// ��˼�ǣ�pָ��Ķ�����ͨ��p���ı��ˣ�����p���������ֵ�ǿ��Ըı��
// 2.const ���� * ���ұ�
// ��˼�ǣ�pָ��Ķ������ͨ��p���޸ģ����ǲ����޸�p���������ֵ.
//

//int main()
//{
//	//const int num = 10;
//	//const int* p = &num;
//	//int n = 20;
//	//p = &n;
//	int num = 10;
//	int* const p = &num;
//	//const ���� p�� ��p�Լ������ֵ���ܷ����仯
//	*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);//()�ڱ��ʽΪ�ٱ���
//	int count = 0;
//	while (count++, *str++ != '\0');
//
//	return count - 1;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	printf("%d\n", my_strlen(NULL));
//	return 0;
//}

// Ctrl + f ����

// ��̳�������
// 1.�����ʹ����﷨����
// 2.�����ʹ��󣬳����������ڼ䣬 static ����ȫ�ֱ���������������Ҫ���á�
// ���ߺ���û�ж��壬_Add�޷��������ⲿ���š�
// 3.����ʱ����ֻ�ܵ��ԣ�
// 
// 


// git���汾������
// ����ֿ�
// show log
//


// �ж������Σ����������ߣ����ܷ񹹳������Σ������ж���ʲô�����Σ�
void judge(int a, int b, int c)
{
	if (b > a)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (c > a)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	
	if (b + c >= a && ((a * a) == ((b * b) + (c * c))))// ��������
	{
		printf("�ܹ��������Σ�ֱ��������\n");
	}
	else if (b + c >= a && a == b && b == c)
	{
		printf("�ܹ��������Σ��ȱ�������\n");
	}
	else if (b + c >= a && b == c && a * a == ((b * b) + (c * c)))
	{
		printf("�ܹ��������Σ�����ֱ��������\n");
	}
	else if (b + c >= a)
	{
		printf("�ܹ��������Σ���ͨ������\n");
	}
	else
	{
		printf("���ܹ���������\n");
	}
}
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	judge(a, b, c);
	return 0;
}