#define _CRT_SECURE_NO_WARNINGS


/*

文本文件和二进制文件

根据数据的组织形式，数据文件被称为文本文件或者二进制文件。

数据在内存中以二进制的形式存储，如果不加转换的输出到外存，就是二进制文件。

如果要求在外存上以ASCII码的形式存储，则需要在存储前转换。以ASCII字符的形式存储的文件就是文本文件。



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
//	// 10000 存储时如果存储 ASCII码 要用5个字节，每个字节表示 1 0 0 0 0 中的一个值的 ASCII码值
//	// 二进制存储形式 ： 00000000 00000000 00100111 00010000
//	//                    0         0       2   7    1  0
//	return 0;
//}


/*

EOF ： end of file
文件读取结束的判定：
牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。

而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。

总而言之：feof 是用来 判断是否是遇到文件尾而结束


1. 文本文件读取是否结束，判断返回值是否为 EOF （ fgetc ），或者 NULL （ fgets ）
例如：
	fgetc 判断是否为 EOF .
	fgets 判断返回值是否为 NULL .
2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
例如：
	fread判断返回值是否小于实际要读的个数。

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
//	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
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

这里可以得出一个结论：
因为有缓冲区的存在，C语言在操作文件的时候，需要做刷新缓冲区或者在文件操作结束的时候关闭文件。

*/

/*

#include <stdio.h>
#include <windows.h>
//VS2013 WIN10环境测试
int main()
{
 FILE*pf = fopen("test.txt", "w");
 fputs("abcdef", pf);//先将代码放在输出缓冲区
 printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
 Sleep(10000);
 printf("刷新缓冲区\n");
 fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
 //注：fflush 在高版本的VS上不能使用了
 printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
 Sleep(10000);
 fclose(pf);
 //注：fclose在关闭文件的时候，也会刷新缓冲区
 pf = NULL;
 return 0;
}

*/


