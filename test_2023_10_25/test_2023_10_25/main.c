#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void swapStr(char* start, char* end);

int main()
{
	char str[] = "i like beijing. 12345";
	int count = 0; // ��¼�ո�ĸ���
	for (int i = 0; i < strlen(str) - 1; ++i)
	{
		if (str[i] == ' ')
			count++;
	}
	count++; // ���ʵĸ��� = �ո�ĸ��� + 1

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
//    // ������һ������
//    int tmp = 0;
//    while (str[tmp] != ' ' && str[tmp] != '\0') {
//        tmpStr[j] = str[tmp];
//        j++, tmp++;
//    }
//    // ����ַ���������
//    tmpStr[j] = '\0';
//
//    // �� tmpStr ������ str ��
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