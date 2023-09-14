#define _CRT_SECURE_NO_WARNINGS 

#include "game.h"

void initBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void printBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷游戏------\n");
	for (i = 0; i <= row; i++)
		printf("%d ", i);
	printf("\n");
	
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏------\n");
}

void setMine(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT_EASY;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		
	}
}

int xianshi(char mine[ROWS][COLS], int x, int y)
{
	return 
	(
		mine[x - 1][y] + mine[x - 1][y - 1] +
		mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 
		8 * '0'
	);
}

void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	// 输入find坐标
	int x = 0;
	int y = 0;
	int win = 0;
	// 判断坐标的合法性
	//while (win < row * col - COUNT_EASY)
	//{
	//	printf("请输入查找的坐标:>");
	//	scanf("%d %d", &x, &y);
	//	// 合法
	//	if (x >= 1 && x <= row && y >= 1 && y <= col)
	//	{
	//		// 该坐标没有被find
	//		if (show[x][y] == '*')
	//		{

	//			// ismine
	//			if (mine[x][y] == '1')
	//			{
	//				printf("很遗憾，你被炸死了\n");
	//				printBoard(mine, row, col);
	//				break;
	//			}
	//			// notmine
	//			else
	//			{
	//				win++;
	//				// 显示周围8个格子内雷的个数
	//				int count = xianshi(mine, x, y);
	//				show[x][y] = count + '0';
	//				printBoard(show, row, col);
	//			}

	//		}
	//		else
	//		{
	//			printf("该坐标已被查找");
	//		}
	//	}
	//	// 不合法
	//	else
	//	{
	//		printf("坐标非法，请重新输入\n");
	//	}
	//}
	while (win < row * col - COUNT_EASY)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标被排查过了，不能重复排查\n");
			}
			else
			{
				//如果是雷
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					printBoard(mine, ROW, COL);
					break;
				}
				else//如果不是雷
				{
					win++;
					//统计mine数组中x,y坐标周围有几个雷
					int count = xianshi(mine, x, y);
					show[x][y] = count + '0';//转换成数字字符
					printBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入的坐标非法,请重新输入\n");
		}
	}

	if (win == row * col - COUNT_EASY)
	{

		printf("扫雷成功\n");
		printBoard(show, row, col);
	}
}
