#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
// Fun(2) ??

// 16

//int mystrlen(char* str)
//{
//	int count = 0;
//	while (count++, *str++ != '\0');
//	return --count;
//}
//int main()
//{
//	char str[] = "abc";
//	printf("%d\n", mystrlen(str));
//	return 0;
//}


// �ݹ�ʵ�� �ַ�������

//int main()
//{
//	char str[7] = "abcdef";
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//
//		left++, right--;
//	}
//	printf("%s\n", str);
//	return 0;
//}

// a b c d e f g
// �ݹ�˼�룺 ���� a �� g ֮���� �����м�� b c d e f 

int mystrlen(char* str)
{
	int count = 0;
	while (count++, *str++ != '\0');
	return --count;
}
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = mystrlen(str); 
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (mystrlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//void reverse2(char* str)
//{
//	char tmp = *str;
//
//	*str = *(str + mystrlen(str) - 1);
//	*(str + mystrlen(str) - 1) = '\0';
//	if (mystrlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + mystrlen(str) - 1) = tmp;
//}
//
//int main()
//{
//	char str[] = "abcdefg";
//	reverse(str);
//	printf("%s\n" ,str);
//	return 0;
//}

//void reverse(char str[], int left, int right)
//{
//	char tmp = str[left];
//	str[left] = str[right];
//	str[right] = tmp;
//	if (left < right)
//		reverse(str, left + 1, right - 1);
//}
//
//
//int main()
//{
//	char str[] = "abcdefg";
//	int left = 0;
//	int right = mystrlen(str) - 1;
//	reverse(str, left, right);
//	printf("%s\n" ,str);
//	return 0;
//}

// ��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else if (k > 1)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int arr[10] = { 0 };
//	// �ڵ��Ե�ʱ�򣬼���й۲죬 num �� ������ int
//	// arr �� ������ int [10] ����������ȥ�� ʣ�µľ������ͣ�[]�ڵ�10������ʡ��
//	return 0;
//}

// sizeof �� strlen�Ա�
// sizeof ��һ��������������������������ͣ������������������ı����Ĵ�С��������ռ�õĿռ�Ĵ�С
// ��λ�Ǵ�С��ֻ�Ǽ���ռ�Ĵ�С�������Ŀռ�����ʲô

// strlen()
// ��һ���⺯������ר���������ַ������ȵģ�ֻ������ַ���
// �Ӳ��������ĵ�ַ��ʼ�������ҡ�\0����ͳ�� '\0'��֮ǰ���ֵ��ַ�����

// �䳤���鲻�ܳ�ʼ����ԭ��
// ��Ϊ�䳤���� [] �� ��һ�����������������������Ż���ջ�Ϸ���ռ��Լ���ʼ����
// �����ڴ�����治���Գ�ʼ��