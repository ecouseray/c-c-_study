#define _CRT_SECURE_NO_WARNINGS 


/*
通讯录
名字
性别
年龄
电话
地址
1.存放100个人的信息
2.增加联系人
3.删除联系人
4.查找联系人
5.修改联系人
6.排序
7.显示联系人
*/
#include <stdio.h>
#include "contact.h"

void menu()
{
	printf("*********************************************\n");
	printf("******    1.add       2.del        **********\n");
	printf("******    3.search    4.modify     **********\n");
	printf("******    5.show      6.sort       **********\n");
	printf("******    0.exit                   **********\n");
	printf("*********************************************\n");
}

int main()
{
	Contact con;

	// 初始化通讯录
	initContact(&con);
	// 添加通讯录



	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("exit");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);

	return 0;
}