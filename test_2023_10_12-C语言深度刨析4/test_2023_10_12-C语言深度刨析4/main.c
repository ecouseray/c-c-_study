#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

// ��һ�������д���ֵ�������������������û�й�ϵ�ģ��� Ҫ��������ݵ��������й�ϵ��
// ����ת���ɶ����Ʋ��룬�ٴ洢�������ռ�����
// 
// 

/*

��С�˵���ʶ��
	

*/

//int main()
//{
//	//int arr[4] = { 1,2,3,4 };
//	return 0;
//}
//int main()
//{
//	char str1[] = "zzz";
//	char str2[10] = "abcdef";
//	strcpy(str2, str1);
//	printf("%s\n", str2);
//}


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[] = "i dont like lanshihua";
//	char* a[101] = { 0 };  // �޸�Ϊ���ʵĴ�С
//	int b = 0;  // �޸�Ϊint����
//
//	int count = 0;
//	for (int i = 0; i < strlen(str) - 1; i++)
//	{
//		if (str[i] == ' ')
//			count++;
//	}
//	count++;
//	for (int i = 0; i < count; i++) {
//		a[i] = strtok((i == 0) ? str : NULL, " ");  // ��һ�δ���str��֮����NULL
//		if (a[i] == NULL) {  // ����ָ���������
//			break;
//		}
//		b = i;  // ��¼��ǰ����
//	}
//
//	for (int j = b; j >= 0; j--) {  // �������
//		//printf("%s ", a[j]);
//		sprintf(str, "%s", a[j]);
//	}
//	printf("%s", str);
//	return 0;
//}