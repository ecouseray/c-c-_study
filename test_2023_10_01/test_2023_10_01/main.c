#define _CRT_SECURE_NO_WARNINGS 


/*

�����Ķ�̬����Ĵ���
1.��NULLָ��Ľ����ò���

*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}


/*

�����Ķ�̬����Ĵ���
2.�Զ�̬���ٿռ��Խ�����

*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	//int* p = (int*)malloc(INT_MAX);
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	// Խ�����
//
//	free(p);
//	p = NULL;
//	return 0;
//}


/*

�����Ķ�̬����Ĵ���
3.�ԷǶ�̬����ռ��free����

*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	//int* p = (int*)malloc(INT_MAX);
//	int* p = (int*)malloc(40);
//	int a = 10;
//	int* ptr = &a;
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	// Խ�����
//
//	free(p);
//	p = NULL;
//	return 0;
//}




/*

�����Ķ�̬����Ĵ���
4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����

*/
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//		//p[i];
//		//*(p + i);
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


/*

�����Ķ�̬����Ĵ���
5.��ͬһ���ڴ�Ķ���ͷ�

*/

//int main()
//{
//	int* p = (int*)malloc(40);
//	// ...
//	free(p);
//	// ...
//	free(p);
//	return 0;
//}



/*

�����Ķ�̬����Ĵ���
6.��̬�����ڴ������ͷţ��ڴ�й¶��

*/

#include <stdio.h>

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
// ?
// str�ڵ���GetMemory����ֵ���ã����Ȼ����ڴ�й©�����str�е�ֵ��Ȼ��NULL����������ó�������


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
// ?
// pָ��Ŀռ䣬�ڳ���GetMemory֮�󣬾��Ѿ��������ˣ����Ǻ�����Ȼ��printf�д���str��Ҳ����p�������������ַ���.


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
// ? 
// �ڴ�й¶

