#define _CRT_SECURE_NO_WARNINGS


#include "snack.h"






// 有一个难点，要输出蛇头和蛇身体，要让光标移动到被需要的位置
// setConsoleCursorPosition()
// 设置控制台光标位置
// 库函数

void menu()
{
	printf("**************************************\n");
	printf("******        1.开始游戏        ******\n");
	printf("******        0.退出游戏        ******\n");
	printf("**************************************\n");
}
void game()
{
	initSnack();
	initFood();

	//showSnack();
	//printf("snack头:x = %d, y = %d\n", snack.snackBodyList[0].x, snack.snackBodyList[0].y);
	//printf("snack身:x = %d, y = %d\n", snack.snackBodyList[1].x, snack.snackBodyList[1].y);
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("贪吃蛇\n");
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
		}

	} while (input);
	return 0;
}

void initSnack(void)
{
	system("cls");

	snack.snackBodyList[0].x = WIDE / 2; // 初始化蛇头
	snack.snackBodyList[0].y = HIGH / 2;

	snack.snackBodyList[1].x = WIDE / 2 - 1; // 初始化第一节蛇身
	snack.snackBodyList[1].y = HIGH / 2;

	snack.snackBodyCount = 2;

	return;
}

// 初始化食物
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
