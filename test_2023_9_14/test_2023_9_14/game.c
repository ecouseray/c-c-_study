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
	printf("------ɨ����Ϸ------\n");
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
	printf("------ɨ����Ϸ------\n");
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
	// ����find����
	int x = 0;
	int y = 0;
	int win = 0;
	// �ж�����ĺϷ���
	//while (win < row * col - COUNT_EASY)
	//{
	//	printf("��������ҵ�����:>");
	//	scanf("%d %d", &x, &y);
	//	// �Ϸ�
	//	if (x >= 1 && x <= row && y >= 1 && y <= col)
	//	{
	//		// ������û�б�find
	//		if (show[x][y] == '*')
	//		{

	//			// ismine
	//			if (mine[x][y] == '1')
	//			{
	//				printf("���ź����㱻ը����\n");
	//				printBoard(mine, row, col);
	//				break;
	//			}
	//			// notmine
	//			else
	//			{
	//				win++;
	//				// ��ʾ��Χ8���������׵ĸ���
	//				int count = xianshi(mine, x, y);
	//				show[x][y] = count + '0';
	//				printBoard(show, row, col);
	//			}

	//		}
	//		else
	//		{
	//			printf("�������ѱ�����");
	//		}
	//	}
	//	// ���Ϸ�
	//	else
	//	{
	//		printf("����Ƿ�������������\n");
	//	}
	//}
	while (win < row * col - COUNT_EASY)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("�����걻�Ų���ˣ������ظ��Ų�\n");
			}
			else
			{
				//�������
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					printBoard(mine, ROW, COL);
					break;
				}
				else//���������
				{
					win++;
					//ͳ��mine������x,y������Χ�м�����
					int count = xianshi(mine, x, y);
					show[x][y] = count + '0';//ת���������ַ�
					printBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("���������Ƿ�,����������\n");
		}
	}

	if (win == row * col - COUNT_EASY)
	{

		printf("ɨ�׳ɹ�\n");
		printBoard(show, row, col);
	}
}
