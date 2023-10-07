#define _CRT_SECURE_NO_WARNINGS


#include "snack.h"


int score = 0;
// 用于记录分数


int kx = 0;  // 用户按下wasd得到的坐标值
int ky = 0;

int lastX;
int lastY;



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
	playGame();

	printf("%d\n", score);
}
int main()
{
	//_kbhit();
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
	// 输出蛇
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
	// 输出食物
	coord.X = food.x;
	coord.Y = food.y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');

	// 将光标回到游戏界面的下面
	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// 输入不回显接受用户输入
// getch()    getchar()回显
// 控制台里面，命令行闪烁，等待输入 -- 阻塞等待
// 当前小游戏中，不可以阻塞等待
// kbhit(); 不阻塞判断用户输入
// 有输入返回‘真’，没输入返回‘假’
//  

void playGame(void)
{
	//Sleep(960);
	char key = 'd';

	// 是否撞墙或者碰到自己的身体
	while (
		snack.snackBodyList[0].x >= 0 && snack.snackBodyList[0].x < WIDE &&
		snack.snackBodyList[0].y >= 0 && snack.snackBodyList[0].y < HIGH 
		  )
	{
		initUI();
		

		// 接受用户输入操作
		if (_kbhit())
		{
			key = _getch();
		}
		
		// 蛇的前一节身体给后一节身体赋值，蛇头 + 输入的 k 值

		switch (key)
		{
		case 'w':
			kx = 0, ky = -1;
			break;
		case 'a':
			kx = -1, ky = 0;
			break;
		case 's':
			kx = 0, ky = 1;
			break;
			
		case 'd':
			kx = 1, ky = 0;
			break;
		default:
			break;
		}

		int i = 0;
		for (i = 1; i < snack.snackBodyCount; i++)
		{
			if (
				snack.snackBodyList[0].x == snack.snackBodyList[i].x &&
				snack.snackBodyList[0].y == snack.snackBodyList[i].y
			   )
				// return; // 蛇头撞身体
					goto flag;
		}

		if (snack.snackBodyList[0].x == food.x && snack.snackBodyList[0].y == food.y)
		{
			// 蛇的身体变长
			snack.snackBodyCount++;
			// 食物消失（产生一个新的食物）
			initFood();

			lastX = snack.snackBodyList[snack.snackBodyCount - 1].x;
			lastY = snack.snackBodyList[snack.snackBodyCount - 1].y;

			for (size_t i = snack.snackBodyCount - 1; i > 0; i--)
			{
				snack.snackBodyList[i].x = snack.snackBodyList[i - 1].x;
				snack.snackBodyList[i].y = snack.snackBodyList[i - 1].y;
			}
			snack.snackBodyList[0].x += kx;
			snack.snackBodyList[0].y += ky;

			// 分数增加；
			score += 10;
			// 蛇的速度提高...
		}
		
		//system("cls"); 

	}
flag://flag 的位置相当于游戏结束
	return;
}