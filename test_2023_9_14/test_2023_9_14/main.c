#define _CRT_SECURE_NO_WARNINGS 


// 9_13����д��bug��

//#include <stdio.h>

//void reverse(char str[], int left, int right)
//{
//	char tmp = str[left];
//	str[left] = str[right];
//	str[right] = tmp;
//	if (left < right)
//		reverse(str, left + 1, right - 1);
//}

// �����ͽ�����֮����һ�����±��ͽ�ȥ�������ᵼ�¶໻һ��
// д��ʱ��Ҫ������ȫ
// ���ʱ��Ҫ�����ȫ

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




// ɨ����Ϸ
// ˼·��
// ���׵�����
// �Ų�����׵���Ϣ������0�� ��1�������ֻ��һ��������������
// �ַ�����  ��ʼ���ַ� 0 . 1  �ַ� * �� �����ַ�
// ����׵�ʱ�򣬻�Խ�磬��������2��2�У�����ֹԽ��
// 
// �����׵�ʱ��Сtips��while()ѭ������Ϊ����ѭ���Ĵ��������������׵ĸ���
// �ж���Χ�м����׵�ʱ��Сtips�� �ַ�1 �� ����1 ��ת��
// 
// ��������֮�󣺱�ǵĹ��ܡ�չ��һƬ�Ĺ���
//

#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("*****       1.��ʼ��Ϸ       *****\n");
	printf("*****       0.�˳���Ϸ       *****\n");
	printf("**********************************\n");
}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	// ��ʼ�� �������̣�һ�����ݣ�һ����ʾ
	initBoard(mine, ROWS, COLS, '0');
	initBoard(show, ROWS, COLS, '*');
	// ��ӡ���� 
	printBoard(mine, ROW, COL);
	printBoard(show, ROW, COL);
	// ������
	setMine(mine, ROW, COL);

	printBoard(mine, ROW, COL);
	//printBoard(show, ROW, COL);
	// ɨ��
	findMine(mine, show, ROW, COL);
}
int main()
{
	int input = 1;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			//printf("��Ϸ\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
		
	} while(input);

	return 0;
}