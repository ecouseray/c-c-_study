#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("******   1.��ʼ��Ϸ    ******\n");
	printf("******   0.�˳���Ϸ    ******\n");
	printf("*****************************\n");
}

void initBoard(int board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void printBoard(int board[ROW][COL], int row, int col)
{
//��һ���汾
	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//	//��ӡ����
	//	printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
	//	//��ӡ�ָ���Ϣ
	//	if (i < row - 1)
	//		printf("---|---|---\n");
	//}

	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		
		}
		printf("\n");
		if (i < row - 1)
		{
			for (k = 0; k < col; k++)
			{
				printf("---");
				if (k < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
	// 
	// 
	// 
	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//	//��ӡ����
	//	//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
	//	int j = 0;
	//	for (j = 0; j < col; j++)
	//	{
	//		printf(" %c ", board[i][j]);
	//		if (j < col - 1)
	//			printf("|");
	//	}
	//	printf("\n");

	//	if (i < row - 1)
	//	{
	//		int j = 0;
	//		for (j = 0; j < col; j++)
	//		{
	//			printf("---");
	//			if (j < col - 1)
	//				printf("|");
	//		}
	//		printf("\n");
	//	}
	//}
}

void playerMove(int board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����");
	while (1)
	{
		printf("����������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}

}


void computerMove(int board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char isWin(int board[ROW][COL], int row, int col)
{
	// ��
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	
	}
	// ��
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}
	// б
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];

	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}
void game()
{
	char ret = 0;
	int board[ROW][COL];
	initBoard(board, ROW, COL);
	printBoard(board, ROW, COL);

	while (1)
	{
		playerMove(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'C')
			break;
		printBoard(board, ROW, COL);
		
		computerMove(board, ROW, COL);
		ret = isWin(board, ROW, COL);
		if (ret != 'C')
			break;
		printBoard(board, ROW, COL);

	}
	if (ret == '*')
		printf("\n���Ӯ\n");
	else if (ret == '#')
		printf("\n����Ӯ\n");
	else 
		printf("ƽ��\n");

	printBoard(board, ROW, COL);
}
