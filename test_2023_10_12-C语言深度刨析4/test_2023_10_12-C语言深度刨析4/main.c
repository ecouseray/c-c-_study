#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

// 向一个变量中存数值，跟这个变量的类型是没有关系的，跟 要存入的数据的类型是有关系的
// 数据转化成二进制补码，再存储到变量空间里面
// 
// 

/*

大小端的认识：
	

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
//	char* a[101] = { 0 };  // 修改为合适的大小
//	int b = 0;  // 修改为int类型
//
//	int count = 0;
//	for (int i = 0; i < strlen(str) - 1; i++)
//	{
//		if (str[i] == ' ')
//			count++;
//	}
//	count++;
//	for (int i = 0; i < count; i++) {
//		a[i] = strtok((i == 0) ? str : NULL, " ");  // 第一次传入str，之后传入NULL
//		if (a[i] == NULL) {  // 处理分割结束的情况
//			break;
//		}
//		b = i;  // 记录当前索引
//	}
//
//	for (int j = b; j >= 0; j--) {  // 逆序输出
//		//printf("%s ", a[j]);
//		sprintf(str, "%s", a[j]);
//	}
//	printf("%s", str);
//	return 0;
//}