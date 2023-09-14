#define _CRT_SECURE_NO_WARNINGS 


// 9_13代码写出bug了

//#include <stdio.h>

//void reverse(char str[], int left, int right)
//{
//	char tmp = str[left];
//	str[left] = str[right];
//	str[right] = tmp;
//	if (left < right)
//		reverse(str, left + 1, right - 1);
//}

// 上来就交换，之后将下一个的下标送进去，这样会导致多换一次
// 写的时候要考虑周全
// 测的时候要测得周全

//void reverse1(char str[], int left, int right)
//{
//	if (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		reverse1(str, left + 1, right - 1);
//	}
//}
//int main()
//{
//	char str[] = "abcdef";
//	
//	int left = 0;
//	int right = strlen(str) - 1;
//	reverse1(str, left, right);
//	printf("%s\n", str);
//	return 0;
//}




// 扫雷游戏
// 思路：
// 存雷的数组
// 排查出来雷的信息（非雷0， 雷1），如果只有一个数组会产生歧义
// 字符数组  初始化字符 0 . 1  字符 * 和 数字字符
// 检查雷的时候，会越界，可以扩大2行2列，来防止越界
// 
// 布置雷的时候，小tips：while()循环，因为可能循环的次数，不仅仅是雷的个数
// 判断周围有几个雷的时候，小tips， 字符1 到 数字1 的转化
// 
// 基础功能之后：标记的功能、展开一片的功能
//

#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("*****       1.开始游戏       *****\n");
	printf("*****       0.退出游戏       *****\n");
	printf("**********************************\n");
}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	// 初始化 两个棋盘，一个数据，一个显示
	initBoard(mine, ROWS, COLS, '0');
	initBoard(show, ROWS, COLS, '*');
	// 打印棋盘 
	printBoard(mine, ROW, COL);
	printBoard(show, ROW, COL);
	// 设置雷
	setMine(mine, ROW, COL);

	printBoard(mine, ROW, COL);
	//printBoard(show, ROW, COL);
	// 扫雷
	findMine(mine, show, ROW, COL);
}
int main()
{
	int input = 1;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			//printf("游戏\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
		
	} while(input);

	return 0;
}