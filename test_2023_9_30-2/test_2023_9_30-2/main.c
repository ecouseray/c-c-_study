#define _CRT_SECURE_NO_WARNINGS 



/*
��̬�ڴ����
malloc
calloc
realloc
*/

#include <stdio.h>
#include <string.h>
#include <errno.h>

// INT_MAX;

// 
// �䳤���� C99��׼�¿��У��������Գ�ʼ����
// ֻ���ڴ�����ʱ�򣬿���ʹ�ñ��������ǲ�����˵�ڴ�����֮�󣬿��������Ŀռ�仯
//


//int main()
//{
//	//int i = 10;
//	//int arr[10] = { 0 };
//	int *p = (int*)malloc(sizeof(int) * 10);// ����ʧ�ܷ���NULL��ָ��
//	// �����ڶ���
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	memset(p, 0, sizeof(int) * 10);
//	// �ڲ�free��ʱ�򣬲�����˵�ռ䲻������
//	// �ڳ���رյ�ʱ��ϵͳ�Զ�����տռ��
//	free(p);
//	p = NULL;
//	// free ����˼��pָ��Ŀռ䷵��������ϵͳ������ָ�����p�еı����ֵ���ᷢ���仯����Ȼ��¼�ŵ�ʱmalloc���ĵ�ַ
//	// ��ʱ���������p��ֵΪNULL��p����һ��Ұָ�룬��Σ��
//	return 0;
//}


// calloc(Ԫ�ظ���, ÿ��Ԫ�ش�С) 
// ���������ʹ�õ�ʱ�򣬻�Ĭ�ϳ�ʼ��ָ��ָ��Ŀռ䣬ȫ����ʼ������
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}


// calloc = malloc + memset

// 
// realloc�����ö�̬����ռ�������
// 
// realloc(Ҫ�������ǿ�ռ����ʼ��ַ, �µĿռ���ܴ�С);
// 
// 
int main()
{
	int* p = (int*)malloc(40);

	// ����

	// ���⣺realloc����ι����ģ�
	// ���������1��ֱ����ԭ���Ŀռ�����ϣ��������׷�ӿռ䣬�����п���Ӱ��ԭ���ռ���汾���Ŀռ�
	// 2.��һ���µĿռ䣬���¿��ٲ��ҳ�ʼ��ԭ����һ���ֵĿռ�
	// ���ǣ����2 + ���1
	// ������1 ����Ŀռ乻�ã���1�������þ������2
	// p = realloc(p, 80);
	// ���ǻ���һ�����⣬�������ط�����Ŀռ���ڴ�Ļ�������ʧ�ܣ��᷵��NULL����pֱ�ӽ��յ�ʱ��ᶪ��ԭ��������
	int * ptr = (int*)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}
	
	;

	free(p);
	p = NULL;
	return 0;
}
// �ڴ�أ�������㵱ǰ����Ҫ�Ŀռ䣬��΢��һ�㣬Ȼ������Լ�ά����һ��ռ�


/*
int InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	pc->capacity = DEFAULT_SZ;
	//�����ļ�����Ϣ��ͨѶ¼��
	LoadContact(pc);
	return 0;
}


void AddContact(Contact* pc)
{
	assert(pc);
	//����
	CheckCapacity(pc);
	//
	printf("����������:>");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�\n");
}


void CheckCapacity(Contact* pc)
{
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
	}
}


void LoadContact(Contact* pc)
{
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo tmp = { 0 };

	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead) == 1)
	{
		CheckCapacity(pc);

		pc->data[pc->count] = tmp;
		pc->count++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

*/