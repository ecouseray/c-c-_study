#define _CRT_SECURE_NO_WARNINGS


#include "snack.h"






// ��һ���ѵ㣬Ҫ�����ͷ�������壬Ҫ�ù���ƶ�������Ҫ��λ��
// setConsoleCursorPosition()
// ���ÿ���̨���λ��
// �⺯��

void menu()
{
	printf("**************************************\n");
	printf("******        1.��ʼ��Ϸ        ******\n");
	printf("******        0.�˳���Ϸ        ******\n");
	printf("**************************************\n");
}
void game()
{
	initSnack();
	initFood();

	//showSnack();
	//printf("snackͷ:x = %d, y = %d\n", snack.snackBodyList[0].x, snack.snackBodyList[0].y);
	//printf("snack��:x = %d, y = %d\n", snack.snackBodyList[1].x, snack.snackBodyList[1].y);
	//printf("food:x = %d, y = %d\n", food.x, food.y);

	initUI();
}
int main()
{
	srand((unsigned int)time(NULL));
	menu();
	int input = 1;
	do
	{
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("̰����\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}

	} while (input);
	return 0;
}

void initSnack(void)
{
	system("cls");

	snack.snackBodyList[0].x = WIDE / 2; // ��ʼ����ͷ
	snack.snackBodyList[0].y = HIGH / 2;

	snack.snackBodyList[1].x = WIDE / 2 - 1; // ��ʼ����һ������
	snack.snackBodyList[1].y = HIGH / 2;

	snack.snackBodyCount = 2;

	return;
}

// ��ʼ��ʳ��
void initFood(void)
{
	food.x = rand() % WIDE;
	food.y = rand() % HIGH;
	return;
}


void initUI(void)
{
	COORD coord;
	for (size_t i = 0; i < snack.snackBodyCount; i++)
	{
		coord.X = snack.snackBodyList[i].x;
		coord.Y = snack.snackBodyList[i].y;
		//printf("x = %d, y = %d\n", coord.X, coord.Y);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if (i == 0)
			putchar('@');
		else
			putchar('*');
	}
	coord.X = food.x;
	coord.Y = food.y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');

	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
