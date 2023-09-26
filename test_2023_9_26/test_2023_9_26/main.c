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

长度受限制的字符串库函数
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
strstr 函数的模拟实现

i like beijing 题目
*/

void reverse(char* str)
{

}

//strtok 字符串切割(目标串，分隔符构成的串)
//切割字符串
// 
// c语言的库函数，在执行失败的时候，都会设置错误码
// strerror
// 
// errno - 是C语言设置的一个全局变量的错误码存放的变量
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


iscntrl 任何控制字符
isspace 空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
isdigit 十进制数字 0~9
isxdigit 十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F
islower 小写字母a~z
isupper 大写字母A~Z
isalpha 字母a~z或A~Z
isalnum 字母或者数字，a~z,A~Z,0~9
ispunct 标点符号，任何不属于数字或者字母的图形字符（可打印）
isgraph 任何图形字符
isprint 任何可打印字符，包括图形字符和空白字符

int tolower ( int c );
int toupper ( int c );


void * memcpy ( void * destination, const void * source, size_t num );

memcpy 负责拷贝两块独立空间中的数据
重复内存的拷贝，是怎么做到的呢？memmove

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
//    //输入
//    gets(arr);//I like beijing.
//    //逆置
//    int len = strlen(arr);
//    //1. 逆序整个字符串
//    reverse(arr, arr + len - 1);
//    //2. 逆序每个单词
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
//    //输出
//    printf("%s\n", arr);
//    return 0;
//}