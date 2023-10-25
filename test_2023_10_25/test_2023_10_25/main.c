#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void swapStr(char* start, char* end);

int main()
{
	char str[] = "i like beijing. 12345";
	int count = 0; // 记录空格的个数
	for (int i = 0; i < strlen(str) - 1; ++i)
	{
		if (str[i] == ' ')
			count++;
	}
	count++; // 单词的个数 = 空格的个数 + 1

	char* start, * end;
	start = end = str;
	swapStr(start, start + strlen(str) - 1);
	while (count--)
	{
		while (*end != ' ' && *end != '\0')
			end++;
		swapStr(start, end - 1);
		//if (*end != '\0')
			end++; 
		start = end;
	}
	printf("%s\n", str);
	return 0;
}

void swapStr(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++, end--;
	}
}


//int main()
//{
//	char str[] = "i like beijing.";
//	char tmpStr[101] = { 0 };
//	int j = 0;
//	for (int i = strlen(str) - 1; i >= 0; --i)
//	{
//		
//		if (str[i] == ' ')
//		{
//			int tmp = i + 1;
//			
//			while (str[tmp] != ' ' && str[tmp] != '\0')
//			{
//				tmpStr[j] = str[tmp];
//				j++, tmp++;
//			}
//			tmpStr[j] = ' ';
//			j++;
//		}
//	}
//	printf("%s\n", tmpStr);
//	return 0;
//}



//
//int main() {
//    char str[] = "i123 like beijing.";
//    char tmpStr[101] = { 0 };
//    int j = 0;
//
//    for (int i = strlen(str) - 1; i >= 0; --i) {
//        if (str[i] == ' ') {
//            int tmp = i + 1;
//            while (str[tmp] != ' ' && str[tmp] != '\0') {
//                tmpStr[j] = str[tmp];
//                j++, tmp++;
//            }
//            tmpStr[j] = ' ';
//            j++;
//        }
//    }
//    // 添加最后一个单词
//    int tmp = 0;
//    while (str[tmp] != ' ' && str[tmp] != '\0') {
//        tmpStr[j] = str[tmp];
//        j++, tmp++;
//    }
//    // 添加字符串结束符
//    tmpStr[j] = '\0';
//
//    // 将 tmpStr 拷贝到 str 中
//    strcpy(str, tmpStr);
//
//    printf("%s\n", str);
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	char str[] = "i dont beijing.";
//	char* a[10] = { 0 };
//
//
//	for (int i = 0; i < 3; i++)
//	{
//		a[i] = strtok(str, " ");
//
//	}
//
//	printf("%s", a[0]);
//
//	return 0;
//
//}