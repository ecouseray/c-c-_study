#define _CRT_SECURE_NO_WARNINGS 


/*
ͨѶ¼
����
�Ա�
����
�绰
��ַ
1.���100���˵���Ϣ
2.������ϵ��
3.ɾ����ϵ��
4.������ϵ��
5.�޸���ϵ��
6.����
7.��ʾ��ϵ��
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

	// ��ʼ��ͨѶ¼
	initContact(&con);
	// ���ͨѶ¼



	int input = 0;
	do
	{
		menu();
		printf("������:>");
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
			printf("���������������\n");
			break;
		}
	} while (input);

	return 0;
}