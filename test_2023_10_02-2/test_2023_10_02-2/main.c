#define _CRT_SECURE_NO_WARNINGS


/*

�ı��ļ��Ͷ������ļ�

�������ݵ���֯��ʽ�������ļ�����Ϊ�ı��ļ����߶������ļ���

�������ڴ����Զ����Ƶ���ʽ�洢���������ת�����������棬���Ƕ������ļ���

���Ҫ�����������ASCII�����ʽ�洢������Ҫ�ڴ洢ǰת������ASCII�ַ�����ʽ�洢���ļ������ı��ļ���



*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//
//	int a = 10000;
//	fwrite(&a, 4, 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	// 10000 �洢ʱ����洢 ASCII�� Ҫ��5���ֽڣ�ÿ���ֽڱ�ʾ 1 0 0 0 0 �е�һ��ֵ�� ASCII��ֵ
//	// �����ƴ洢��ʽ �� 00000000 00000000 00100111 00010000
//	//                    0         0       2   7    1  0
//	return 0;
//}


/*

EOF �� end of file
�ļ���ȡ�������ж���
�μǣ����ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ������

����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β������

�ܶ���֮��feof ������ �ж��Ƿ��������ļ�β������


1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�Ϊ EOF �� fgetc �������� NULL �� fgets ��
���磺
	fgetc �ж��Ƿ�Ϊ EOF .
	fgets �жϷ���ֵ�Ƿ�Ϊ NULL .
2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
���磺
	fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����

*/


//int main()
//{
//	FILE* pfSrc = fopen("C:\\Users\\useray\\Desktop\\1.txt", "r");
//	if (pfSrc == NULL)
//	{
//		perror("fopen:pfSrc");
//		return 1;
//	}
//
//	FILE* pfDest = fopen("C:\\Users\\useray\\Desktop\\2.txt", "w");
//	if (pfDest == NULL)
//	{
//		perror("fopen:pfDest");
//		return 2;
//	}
//
//	int ch = 0;
//	while ((ch = fgetc(pfSrc)) != EOF)
//	{
//		fputc(ch, pfDest);
//	}
//
//	if (ferror(pfSrc))
//	{
//		puts("I/O error\n");
//	}
//	else if (feof(pfSrc))
//	{
//		puts("End Of File\n");
//	}
//
//	fclose(pfSrc);
//	pfSrc = NULL;
//	fclose(pfDest);
//	pfDest = NULL;
//	return 0;
//}


//#include <stdio.h>
//enum { SIZE = 5 };
//int main(void)
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//	fwrite(a, sizeof * a, SIZE, fp); // д double ������
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // �� double ������
//	if (ret_code == SIZE) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//}


/*

������Եó�һ�����ۣ�
��Ϊ�л������Ĵ��ڣ�C�����ڲ����ļ���ʱ����Ҫ��ˢ�»������������ļ�����������ʱ��ر��ļ���

*/

/*

#include <stdio.h>
#include <windows.h>
//VS2013 WIN10��������
int main()
{
 FILE*pf = fopen("test.txt", "w");
 fputs("abcdef", pf);//�Ƚ�����������������
 printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
 Sleep(10000);
 printf("ˢ�»�����\n");
 fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
 //ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
 printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
 Sleep(10000);
 fclose(pf);
 //ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
 pf = NULL;
 return 0;
}

*/


