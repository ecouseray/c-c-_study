#define _CRT_SECURE_NO_WARNINGS 


//#include <stdio.h>
//int func(int n, int m)
//{
//    if (m == 1)
//        return n;
//    else
//        return n * func(n - 1, m - 1);
//}
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int ret = func(n, m);
//    printf("%d", ret);
//    return 0;
//}



// ָ��
/*
1. ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ䡣
2. ָ��Ĵ�С�ǹ̶���4/8���ֽڣ�32λƽ̨/64λƽ̨����
3. ָ���������ͣ�ָ������;�����ָ���+-�����Ĳ�����ָ������ò�����ʱ���Ȩ�ޡ�
4. ָ������㡣
*/

// 
//


#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'a';
//	printf("%c\n", *p);
//	return 0;
//}
//int main()
//{
//	const char* pstr = "hello world.";//�����ǰ�һ���ַ����ŵ�pstrָ�����������
//	printf("%s\n", pstr);
//	return 0;
//}
// 
// ���ַ��� �ַ�h�ĵ�ַ����ֵ����pstr
// 
// 
// 

//int main()
//{
//	char str1[] = "hello xx.";
//	char str2[] = "hello xx.";
//
//	const char* str3 = "hello xx.";
//	const char* str4 = "hello xx.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


/*
ָ�����飺
int *p1[10];
int (*p2)[10];
p1, p2�ֱ���ʲô��

int *p1[10];
p1�Ⱥ�[]��ϣ�˵������һ�����飬[10]��˵��Ԫ��10��Ԫ�أ�ÿ��Ԫ�ص������� int*
int (*p2)[10];
p1�Ⱥ�* ��ϣ�˵������һ��ָ�룬[] ˵����ָ��һ�����飬[10] ˵����������10��Ԫ�أ�int ˵��ÿ��Ԫ�ص�������int

*/


/*
��̸ ������ �� &������
*/
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr+1= %p\n", &arr + 1);
//	return 0;
//	return 0;
//}
/*
��������ͨ����ʾ������Ԫ�ص�ַ
�������������⣺
1.sizeof(������) �� �����������������һ��������������
sizeof(arr+0),������һ��������������
�������������ʾ�������飬 ���������������Ĵ�С
2.&������
�������������Ȼ��ʾ���������飬����&������ȡ��������������ĵ�ַ

*/


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//int (*p1)[10] = &arr;
//	int (*p1)[sizeof(arr) / sizeof(arr[0])] = &arr;
//
//	// arr �������� int [10]
//	// ��Ϊʲô p1 �������岻�����أ�
//	return 0;
//}



/*
int arr[5];
int *parr1[10];
int (*parr2)[10];
int (*parr3[10])[5];
parr3�Ⱥ�[]��ϣ�˵������һ�����飬֮��[10]��˵�������������10��Ԫ��,֮���*���,˵��Ԫ��������ָ�룬֮��[]��˵��Ԫ����ָ������
[5]��˵��ÿ��ָ��������5��Ԫ�أ�ÿ��Ԫ��������int


parr3��һ���������ָ������飬
or
parr3�Ⱥ�[10]��ϣ�˵������һ�����飬����һ�����飬parr3������������[10]������Ԫ�ظ���������һ�������ߣ�ʣ�µ�������Ԫ������
int (*)[5] ����ָ��
*/



/*
���������ָ�����
*/
// һά���鴫��
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

// ��ά���鴫��
//void test(int arr[3][5])//ok��
//{}
//void test(int arr[][])//ok��
//{}
//void test(int arr[][5])//ok��
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//ok��// ��ά������������ʾ������Ԫ�صĵ�ַ����ʵ���ǵ�һ�еĵ�ַ
//{}
//void test(int* arr[5])//ok��  // ������Ҫһ��ָ�룬�β���һ������
//{}
//void test(int(*arr)[5])//ok��
//{}
//void test(int** arr)//ok�� // ��ά��������������׸�һά����ĵ�ַ������ָ�����������һ��ָ��ĵ�ַ�ģ����Բ���
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


// һ��ָ�봫��
//
//
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}



/*
����ָ�룺ָ������ָ��
��
����ָ����ȣ�ָ�������ָ��


һ�����⣺����ָ������飬����Ϊ�������ڴ������пռ�ģ����Ǻ�������ֻ���ڵ��õ�ʹ�òŴ�������ջ֡�������ָ���ڲ����ú�����ʱ�򲻾���Ұָ������
������ȫ�ֱ�����һ���ģ�����д��֮����е�ַ
*/
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	//printf("%p\n", &add);
//	//printf("%p\n", add);
//	int (*padd)(int, int) = add;
// 
//	printf("%d\n", padd(2, 3));
//	printf("%d\n", ��*padd��(2, 3));
//	return 0;
//}
/*
��C�����У���������������ڱ��ʽ�У������Զ�ת��Ϊָ��ú�����ָ�롣��ˣ��ڸ�ֵ������ָ��ʱ�����ǲ���Ҫʹ��ȡ��ַ������& ����ȡ�����ĵ�ַ��

������д operation = add; ʱ���������Ὣ add �����Զ�ת��Ϊָ��ú�����ָ�룬�����丳ֵ�� operation��



�� C �����У�����ָ���������һ�����е��ã���������á�����ָ������������һ�������ڱ�ʾ��������ڵ��ַ����˿���ֱ��ʹ�ú���ָ�������к������ò�����

���ԣ�����ʹ�� padd(2, 3) ���� padd ʱ�������Զ�����Ϊ���� add(2, 3)�������ؼ�������������ʽ�����ú���ָ�롣
*/


////����1
//(*(void (*)())0)();
////����2
//void (*signal(int, void(*)(int)))(int);

//int main()
//{
//	(*(void (*)())0)();
//	//void (*)()  ����ָ��
//	//()�� 0 ǿתΪ ����ָ��
//	//* �Ժ���ָ������� ֮�����
//	//���� 0 ��ַ �� �� ����
//	return 0;
//}


//	int (*padd)(int, int) = add;
//                              ����ָ������
//typedef void(*pf_t)(int); //��void(*)(int)����������Ϊpf_t
//int main()
//{
//	void (*signal(int, void(*)(int)))(int);
//// ������һ�κ����������� ������signal�����ĵ�һ��������������int,�ڶ��������������Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������������int������ֵ��void
//// signal �����ķ�������Ҳ��һ������ָ�룬�ú���ָ����ָ��ĺ���������������int������������void
//
//	pf_t signal(int, pf_t);
//
//	return 0;
//}




// ��Ϊ�о�֮ǰʹ�ú���ָ�붼���ѿ��ӷ�ƨ��û�б�Ҫ��
// ����
// 
// ����ָ���ʵ��Ӧ��

//void menu()
//{
//	printf("*****************************\n");
//	printf("****   1. add   2. sub  *****\n");
//	printf("****   3. mul   4. div  *****\n");
//	printf("****   0. exit          *****\n");
//	printf("*****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////
////����
////�ص�����
////
//
//void calc(int (*pf)(int , int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("������2��������:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int main()
//{
//	//int (*pf_add)(int, int) = add;
//
//	int (*pf_add)(int, int) = add;
//
//	int (*(arr_p_f[4]))(int, int) = { add, sub, mul };
//
//	int (*arr_p_f1[4])(int, int) = { add, sub, mul };
//
//	return 0;
//}




//x&y
//x^y
//x|y
//x&&y
//x||y
//x>>y
//x<<y
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****   1. add   2. sub  *****\n");
//	printf("****   3. mul   4. div  *****\n");
//	printf("****   0. exit          *****\n");
//	printf("*****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//����ָ�������
//	//ת�Ʊ�
//	int (*pfArr[])(int, int) = {0, Add, Sub, Mul,  Div};
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//
//	} while (input);
//
//	return 0;
//}




// ָ����ָ�������ָ��

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul,  Div };
//
//	int (*(*pfArrP)[5]) (int, int) = &pfArr;
//
//
//
//	int(*(*pfArrP)[5]) (int, int) = &pfArr;
//
//
//	return 0;
//}



/*

�ص�����

�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��
�����������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú���
��ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���������
����Ӧ��

*/

//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//			flag = 0;
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0, 2, 4, 6, 8, 10, 1,3,5,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//
//	return 0;
//}









//qsort

//qsort -����������������������͵�����
//

//void qsort(void* base,//��Ҫ��������ݵ���ʼλ��
//	       size_t num,//�����������Ԫ�صĸ���
//	       size_t width,//�����������Ԫ�صĴ�С����λ���ֽڣ�
//	       int(* cmp)(const void* e1, const void* e2)//����ָ��-�ȽϺ���
//          );
//__cdecl - ��������Լ��

// qsort ����ֵ >0 =0 <0
// qsort Ĭ������Ҫ�뽵�򣬴���cmp�����е�����Ԫ�أ�ʹ���෴


#include <stdlib.h>

//�Ƚ�2������Ԫ��
//e1ָ��һ������
//e2ָ������һ������

//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void test1()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//0 1 2 3 4 5 6 7 8 9
//	//�������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	int a = 10;
//	//char* pa = &a;//int*
//	void* pv = &a;//void*���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//	//void*���޾������͵�ָ�룬���Բ��ܽ����ò�����Ҳ����+-����
//	//
//	return 0;
//}
//





void bubble_sort(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			flag = 0;
		}
		if (flag == 1)
			break;
	}
}


//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//�����������ź���
		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

//void qsort(void* base,//��Ҫ��������ݵ���ʼλ��
//	       size_t num,//�����������Ԫ�صĸ���
//	       size_t width,//�����������Ԫ�صĴ�С����λ���ֽڣ�
//	       int(* cmp)(const void* e1, const void* e2)//����ָ��-�ȽϺ���
//          );
//__cdecl - ��������Լ��


// qsort ���� ��֪�� δ��ʹ�����qsort�����Ƚϵ��ˣ���Ҫ�Ƚϵ�������ʲô���͵�
// 
// ����

// ��Ȼ��֪����ʲô���͵ģ� �� width���� Ԫ�ظ��� �����ҵ�֮�� ����������