#define _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>
#include <assert.h>
//
//int myStrcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1++ == *str2++ && *str1 != '\0');
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char str1[] = "abcd";
//	char str2[] = "abc";
//	printf("%d\n", myStrcmp(str1, str2));
//	return 0;
//}



/*

���������Ƶ��ַ����⺯��
strncpy
strncat
strcnmp

*/
//void myStrncpy(char* str1, char* str2, int count)
//{
//	while (count && (*str1++ = *str2++))
//	{
//		--count;
//		//str1++, str2++;
//	}
//	while (count)
//	{
//		*str1++ = '\0';
//		count--;
//	}
//
//}
//
//
//int myStrncmp(const char* str1, const char* str2, int count)
//{
//	//while (*str1++ != '\0'  && *str1 == *++str2  && count--);
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char str1[] = "abcdefgh";
//	char str2[] = "abce";
//	//strcpy(str1, str2);
//	//myStrncpy(str1, str2, 5);
//	printf("%d\n", myStrncmp(str1, str2, 3));
//	return 0;
//}



/*
strstr ������ģ��ʵ��

i like beijing ��Ŀ
*/

void reverse(char* str)
{

}

//strtok �ַ����и�(Ŀ�괮���ָ������ɵĴ�)
//�и��ַ���
// 
// c���ԵĿ⺯������ִ��ʧ�ܵ�ʱ�򣬶������ô�����
// strerror
// 
// errno - ��C�������õ�һ��ȫ�ֱ����Ĵ������ŵı���
//


//#include <errno.h>
//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//}



/*
size_t strlen ( const char * str );
char* strcpy(char * destination, const char * source );
char * strcat ( char * destination, const char * source );
int strcmp ( const char * str1, const char * str2 );
char * strncpy ( char * destination, const char * source, size_t num );
char * strncat ( char * destination, const char * source, size_t num );
int strncmp ( const char * str1, const char * str2, size_t num );
char * strstr ( const char *str1, const char * str2);
char * strtok ( char * str, const char * sep );
char * strerror ( int errnum );	


iscntrl �κο����ַ�
isspace �հ��ַ����ո� ������ҳ��\f��������'\n'���س���\r�����Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
isdigit ʮ�������� 0~9
isxdigit ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F
islower Сд��ĸa~z
isupper ��д��ĸA~Z
isalpha ��ĸa~z��A~Z
isalnum ��ĸ�������֣�a~z,A~Z,0~9
ispunct �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
isgraph �κ�ͼ���ַ�
isprint �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�

int tolower ( int c );
int toupper ( int c );


void * memcpy ( void * destination, const void * source, size_t num );

memcpy ���𿽱���������ռ��е�����
�ظ��ڴ�Ŀ���������ô�������أ�memmove

*/




//void reverse(char* left, char* right)
//{

//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
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
//    //���
//    printf("%s\n", arr);
//    return 0;
//}