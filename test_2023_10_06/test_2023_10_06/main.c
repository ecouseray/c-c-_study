#define _CRT_SECURE_NO_WARNINGS


#include "snack.h"


int score = 0;
// ���ڼ�¼����


int kx = 0;  // �û�����wasd�õ�������ֵ
int ky = 0;

int lastX;
int lastY;



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
	// �����
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
	// ���ʳ��
	coord.X = food.x;
	coord.Y = food.y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');

	// �����ص���Ϸ���������
	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// ���벻���Խ����û�����
// getch()    getchar()����
// ����̨���棬��������˸���ȴ����� -- �����ȴ�
// ��ǰС��Ϸ�У������������ȴ�
// kbhit(); �������ж��û�����
// �����뷵�ء��桯��û���뷵�ء��١�
//  

void playGame(void)
{
	//Sleep(960);
	char key = 'd';

	// �Ƿ�ײǽ���������Լ�������
	while (
		snack.snackBodyList[0].x >= 0 && snack.snackBodyList[0].x < WIDE &&
		snack.snackBodyList[0].y >= 0 && snack.snackBodyList[0].y < HIGH 
		  )
	{
		initUI();
		

		// �����û��������
		if (_kbhit())
		{
			key = _getch();
		}
		
		// �ߵ�ǰһ���������һ�����帳ֵ����ͷ + ����� k ֵ

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
				// return; // ��ͷײ����
					goto flag;
		}

		if (snack.snackBodyList[0].x == food.x && snack.snackBodyList[0].y == food.y)
		{
			// �ߵ�����䳤
			snack.snackBodyCount++;
			// ʳ����ʧ������һ���µ�ʳ�
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

			// �������ӣ�
			score += 10;
			// �ߵ��ٶ����...
		}
		
		//system("cls"); 

	}
flag://flag ��λ���൱����Ϸ����
	return;
}