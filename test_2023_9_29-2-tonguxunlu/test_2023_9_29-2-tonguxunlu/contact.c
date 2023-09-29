#define _CRT_SECURE_NO_WARNINGS 

#include "contact.h"

void initContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("ͨѶ¼����,���ɼ������\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pc->count].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pc->count].age));
		printf("�������Ա�:>");
		scanf("%s", &(pc->data[pc->count].sex));
		printf("������绰:>");
		scanf("%s", &(pc->data[pc->count].tele));
		printf("�������ַ:>");
		scanf("%s", &(pc->data[pc->count].addr));

		//scanf("%s %s %d %s %s", pc->data[pc->count].name, pc->data[pc->count].sex, pc->data[pc->count].age,
		//						pc->data[pc->count].tele, pc->data[pc->count].addr);
		pc->count++;
		printf("��ӳɹ�\n");
	}
}


//void ShowContact(const Contact* pc)
//{
//	assert(pc);
//
//	int i = 0;
//	for (i = 0; i < pc->count; i++)
//	{
//
//		//printf("������%20s\n", pc->data[i].name);
//		//printf("���䣺%3d\n", pc->data[i].age);
//		//printf("�Ա�%s\n", pc->data[i].sex);
//		//printf("�绰��%s\n", pc->data[i].tele);
//		//printf("��ַ��%s\n", pc->data[i].addr);
//	}
//}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}


static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}

	return -1;
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û����Ϣ����ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//ɾ��
	//1. ����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//2. ɾ��
	for (i = pos; i < pc->count - 1; i++) 
	// ����ط���count - 1 ����Ϊ��һ��dataҪ����[i + 1] ��Խ����ʣ�������һ��Ԫ�أ�ֱ�Ӹ�count--�����һ��Ԫ�ؾͷ��ʲ�����
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;

	printf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	//1. ����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	//2. ��ӡ
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}


void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	//1. ����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	printf("Ҫ�޸ĵ��˵���Ϣ�Ѿ����ҵ�����������ʼ�޸�\n");
	//2. �޸�
	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);

	printf("�޸ĳɹ�\n");
}

