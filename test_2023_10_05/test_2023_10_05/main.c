#define _CRT_SECURE_NO_WARNINGS 



//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = NULL;
//	p = (int*)malloc(sizeof(int) * 10);
//
//	int i = 0;
//	for (i = 0; i < 10; ++i)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//
//#define MALLOC(num, type) (type *)malloc(num * sizeof(type)) 
//
//int main()
//{
//	int* p = NULL;
//	p = MALLOC(10, int*);
//
//	int i = 0;
//	for (i = 0; i < 10; ++i)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	double* pd = NULL;
//	pd = calloc(10, sizeof(double));
//	int i = 0;
//	//for (i = 0; i < 10; ++i)
//	//{
//	//	*(pd + i) = i + 1.1;
//	//}
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%.2lf ", *(pd + i));
//	}
//	
//	free(pd);
//	pd = NULL;
//	return 0;
//}


// calloc == malloc + memset


//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//	int* pi = calloc(10, sizeof(int));
//	float* pf = malloc(10 * sizeof(float));
//
//	//memcpy(pf, pi, 10 * sizeof(sizeof(float)));
//
//	memset(pf, 0, 10 * sizeof(float));
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%3d   %.1f\n", *(pi + i), *(pf + i));
//	}
//
//	return 0;
//}


// memmove  用于重复内存块的拷贝
// memcmp   用于内存的比较


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//#include <limits.h>
//
//int main()
//{
//	//int max = INT_MAX; 
//	int* pi = malloc(10 * sizeof(int));
//	if (pi == NULL)
//	{
//		perror("malloc");
//	}
//	printf("%p\n", pi);
//
//	int* tmp = NULL;
//	//tmp = realloc(tmp, 11 * sizeof(int));
//	tmp = realloc(tmp, 500 * sizeof(int));
//	if (tmp != NULL)
//	{
//		pi = tmp;
//		tmp = NULL;
//	}
//	printf("%p\n", pi);
//
//	free(pi);
//	pi = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	char s[] = "Hello FILE!";
//	char* ps = &s[0];
//	while ('\0' != fputc(*ps, pf))
//	{
//		ps++;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//#include <stdio.h>

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
//
//
//int main()
//{
//	FILE* pf1 = fopen("test.txt", "r");
//	FILE* pf2 = fopen("test2.txt", "w");
//	if (!pf1 || !pf2)
//	{
//		perror("fopen");
//	}
//
//	int c = 0;
//	while (c = fgetc(pf1) != EOF)
//	{
//		fputc(c, pf2);
//	}
//
//	if (ferror(pf1))
//	{
//		printf("IO error\n");
//	}
//	else if (feof(pf1))
//	{
//		printf("end of file\n");
//	}
//
//
//	return 0;
//}



#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//
//	fputs("今天感觉状态很不好\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	pf = fopen("test.txt", "r");
//	FILE* pf2 = fopen("test2.txt", "w");
//
//
//
//	return 0;
//}




//struct S
//{
//	char name[20];
//	int age;
//	float source;
//};
//
//
//int main()
//{
//	FILE* pf = fopen("erjinzhiwenjian.txt", "wb");
//	struct S s = { "zhangsan", 20, 79.9 };
//
//	fwrite(&s, sizeof(s), 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//
//	struct S s1 = { 0 };
//	pf = fopen("erjinzhiwenjian.txt", "rb");
//	fread(&s1, sizeof(s1), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	printf("%s %d %.2f\n", s1.name, s1.age, s1.source);
//
//	return 0;
//}


//#define MAX 10
//int main()
//{
//	FILE* pf = fopen("erjinzhiwenjian.txt", "wb");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//
//	double arrD[MAX];
//	int i = 0;
//	for (i = 0; i < MAX; i++)
//	{
//		arrD[i] = i + 1.0;
//	}
//
//	fwrite(arrD, sizeof(float), MAX, pf);
//	fclose(pf);
//	pf = NULL;
//
//	pf = fopen("erjinzhiwenjian.txt", "rb");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	float arrF[MAX] = { 0 };
//	
//	//fread(arrF, sizeof(float), MAX, pf);
//	//fclose(pf);
//	//pf = NULL;
//
//	//for (i = 0; i < MAX; i++)
//	//{
//	//	printf("%.2f\n", arrF[i]);
//	//}
//
//	size_t ret_code = fread(arrF, sizeof(float), MAX, pf);
//	if (ret_code == MAX) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < MAX; ++n)
//			printf("%f ", arrF[n]);
//
//		putchar('\n');
//	}
//	return 0;
//}

#include <stdio.h>
enum { SIZE = 5 };
int main(void)
{
	double a[SIZE] = { 1.,2.,3.,4.,5. };
	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
	fwrite(a, sizeof (double), SIZE, fp);;// 写 double 的数组
	fclose(fp);

	double b[SIZE];
	fp = fopen("test.bin", "rb");
	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
	if (ret_code == SIZE) {
		puts("Array read successfully, contents: ");
		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
		putchar('\n');
	}
	else { // error handling
		if (feof(fp))
			printf("Error reading test.bin: unexpected end of file\n");
		else if (ferror(fp)) {
			perror("Error reading test.bin");
		}
	}
	fclose(fp);
}