#define _CRT_SECURE_NO_WARNINGS 


/*

柔性数组：
柔性数组（flexible array）
C99 中，结构体中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。

一个成员变量

柔性数组的特点：
结构中的柔性数组成员前面必须至少一个其他成员。(必须是最后一个成员)
sizeof 返回的这种结构大小不包括柔性数组的内存。
包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，并且分配的内存应该大于结构的大
小，以适应柔性数组的预期大小。
*/



//struct st_type
//{
//	int i;
//	int arr[0];// 柔性数组成员
//};
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//
//	//printf("%zu\n", sizeof(struct st_type));
//
//	//struct st_tpye s; // 4
//
//	// 柔性数组的使用
//	struct st_type* ptr = (struct st_type*)malloc(sizeof(struct st_type) + 40);
//
//	ptr->i = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ptr->arr[i] = i + 1;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ptr->arr[i]);
//	}
//	// 柔性的体现，因为这个数组空间是malloc出来的，所以之后可以通过realloc来重新设置大小，可大可小
//
//	//...
//
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}



// 一个问题，那为什么不让 结构体内 的元素是 int* 让这个指针去指向一个malloc的空间

/*

第一个好处是：方便内存释放
如果我们的代码是在一个给别人用的函数中，你在里面做了二次内存分配，并把整个结构体返回给
用户。用户调用free可以释放结构体，但是用户并不知道这个结构体内的成员也需要free，所以你
不能指望用户来发现这个事。所以，如果我们把结构体的内存以及其成员要的内存一次性分配好
了，并返回给用户一个结构体指针，用户做一次free就可以把所有的内存也给释放掉。
第二个好处是：这样有利于访问速度.
连续的内存有益于提高访问速度，也有益于减少内存碎片。（其实，我个人觉得也没多高了，反正
你跑不了要用做偏移量的加法来寻址）

*/





































/*

文件操作：
1.文件的打开

程序设计中的两种文件分类：
程序文件、数据文件（从文件功能的角度来分类的）

程序文件：包括源程序文件（后缀为.c）,目标文件（windows环境后缀为.obj）,可执行程序（windows环境后缀为.exe）。

数据文件：文件的内容不一定是程序，而是程序运行时读写的数据，比如程序运行需要从中读取数据的文件，或者输出内容的文件。


文件名
一个文件要有一个唯一的文件标识，以便用户识别和引用。
文件名包含3部分：文件路径+文件名主干+文件后缀
例如： c:\code\test.txt
为了方便起见，文件标识常被称为文件名


文件的打开和关闭：

操作文件：
1.打开文件
2.操作文件
3.关闭文件

文件类型指针：简称文件指针
每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件的名
字，文件状态及文件当前的位置等）。这些信息是保存在一个结构体变量中的。该结构体类型是有系统
声明的，取名FILE.


如何理解这里的：正在被使用：
一个文件在磁盘上，一旦打开一个文件，就回来内存上创建一个“文件信息区”
文件信息区的类型（是一个结构体，类型是FILE）是：FILE，会记录当前文件的：大小、位置、等等信息



定义pf是一个指向FILE类型数据的指针变量。可以使pf指向某个文件的文件信息区（是一个结构体变
量）。通过该文件信息区中的信息就能够访问该文件。也就是说，通过文件指针变量能够找到与它关联
的文件。


*/

// FILE* fopen(const char* filename, cosnt char* mode)// mode 文件的打开模式：读、写... 
// r read  w write  a append
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\useray\\Desktop\\test.txt", "r");
//	// test.txt 在磁盘中，
//	// 打开后生成文件信息区 ， 在内存中 
//	
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 以 r 形式打开，这个文件必须存在




/*

C语言中使用文件操作需要调用fopen函数来打开文件，
并返回一个指向文件信息区的指针，
这个指针指向的是内存中的文件控制块。
文件控制块通常被称为文件句柄，
它包含了文件的描述符、文件指针、读写位置等信息，
用于管理和控制文件的访问。

具体来说，文件信息区属于堆内存段，
即由程序员手动分配和释放的内存区域，
它位于内存的动态分配区。
在打开文件时，操作系统会分配一块内存区域作为文件信息区，
其地址由fopen函数返回值指定。
因此，文件信息区的内存位置是动态的，
取决于文件打开时操作系统所分配的内存地址。

*/


/*

文件使用方式        含义                                   如果指定文件不存在
“r”（只读）    为了输入数据，打开一个已经存在的文本文件      出错
“w”（只写）    为了输出数据，打开一个文本文件            建立一个新的文件
“a”（追加）    向文本文件尾添加数据                     建立一个新的文件
“rb”（只读）    为了输入数据，打开一个二进制文件             出错
“wb”（只写）    为了输出数据，打开一个二进制文件         建立一个新的文件
“ab”（追加）    向一个二进制文件尾添加数据                  出错
“r+”（读写）    为了读和写，打开一个文本文件                出错
“w+”（读写）    为了读和写，建议一个新的文件             建立一个新的文件
“a+”（读写）    打开一个文件，在文件尾进行读写           建立一个新的文件
“rb+”（读写）    为了读和写打开一个二进制文件               出错
“wb+”（读写）    为了读和写，新建一个新的二进制文件       建立一个新的文件
“ab+”（读写）    打开一个二进制文件，在文件尾进行读和写    建立一个新的文件

*/


/*

文件的顺序读写

功能            函数名      适用于
字符输入函数     fgetc      所有输入流
字符输出函数     fputc       所有输出流
文本行输入函数   fgets       所有输入流
文本行输出函数    fputs      所有输出流
格式化输入函数    fscanf      所有输入流
格式化输出函数    fprintf    所有输出流
二进制输入       fread        文件
二进制输出       fwrite       文件

*/

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	// 写文件
//
//	fputc('a', pf);
//
//
//	// 关文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	// 写文件
//
//	char i = 'a';
//	for (i = 'a'; i <= 'z'; i++)
//		fputc(i, pf);
//
//
//	// 关文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	// 读文件
//
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//
//	int ch = 0;
//	while ((ch = fgetc(pf) != EOF))
//		printf("%c ", ch);
//
//
//
//	// 关文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen:");
//		return 1;
//	}
//
//	// 写一行数据
//	// char i = 'a';
//	//for (i = 'a'; i <= 'z'; i++)
//	//	fputc(i, pf);
//	
//	//fputs("Hello World!\n", pf);
//	// 写文件的时候，如果文件内有内容，他会将文件内的内容全部清空，重新写进去数据
//	// 如果不想清楚数据的话，打开方式的地方用‘a’，追加方式，在文件数据的尾部追加
//	// 如果想要换行，就要在写的文件数据中加入换行
//
//	char str[20];
//	fgets(str, 5, pf);
//	// 读到哪里， 读几个字节(这个地方有效字符数其实是5 - 1，最后一个字节要补充一个\0), 从哪里读
//	// 读取错误的时候返回NULL
//
//	// 关文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	// 写文件
//
//	char i = 'a';
//	for (i = 'a'; i <= 'z'; i++)
//		fputc(i, pf);
//
//
//	// 关文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 读写数据的过程中间，封装了一层 叫做 流
// 数据的水流
// 数据先写道“流”里面，“流”里面的数据再写到外部设备里去

// 流
// FILE* 可以称为一个 文件流
// 
// 我们在使用的printf和scanf时候没有说我们打开屏幕，关闭屏幕
// 但是文件却说是打开文件
// 
// 任何一个C程序，只要运行起来，就会默认打开3个流
// stdin    - 标准输入流（键盘）
// stdout   - 标准输出流（屏幕）
// stderr   - 标准错误流（屏幕）
// 类型都是 FILE*
// 流 其实对应的 就是 输入输出缓冲区 这个地方的缓冲区
//


/*

二进制的读


*/

//struct S
//{
//	char name[20];
//	float source;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 50.5 };
//
//	FILE* pf = fopen("test.txt", "wb");
//
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("test.txt", "rb");
//
//	//fwrite(&s, sizeof(struct S), 1, pf);
//
//	fread(&s, sizeof(s), 1, pf);
//
//
//	fclose(pf);
//	return 0;
//}

// 读写一个二进制文件
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// ...
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

/*

scanf   fscanf   sscanf

printf  fprintf  sprintf

scanf   是针对 标准输入的格式化输入语句
printf  是针对 标准输出的格式化输出语句

fscanf  是针对 所有输入流的格式化输入语句
fprintf 是针对 所有输入流的格式化输出语句

sscanf  从一个字符串中，转化出一个格式化的数据
sprintf 把一个格式化的数据写到字符串中，本质是把一个格式化的数据转化成字符串

*/

//struct S
//{
//	char name[20];
//	int age;
//	float source;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 85.5f };
//	struct S tmp = { 0 };
//
//	char buf[100];
//
//	// 把s中的格式化数据转化成字符串，放到buf中
//	sprintf(buf, "%s %d %f", s.name, s.age, s.source);
//
//	printf("%s\n", buf);
//
//	// 从字符串buf 中获取一个格式化数据 到 tmp中
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.source));
//
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.source);
//
//	return 0;
//}
// 一个应用： 前端拿到数据之后，后端接收到，处理数据
// 序列化 和 反序列化

/*

void SaveContact(const Contact* pc)
{
	assert(pc);
	FILE* pfWrite = fopen("contact.txt", "wb");
	if (pfWrite == NULL)
	{
		perror("SaveContact");
		return;
	}
	//写文件-二进制的形式
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data+i, sizeof(PeoInfo), 1, pfWrite);
	}

	fclose(pfWrite);
	pfWrite = NULL;
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


/*

文件的随机读写：
fseek(文件流，偏移位置， SEEK_SET) SET最开始位置，，CUR当前位置，，END结束位置

怎么知道一个位置相对其实位置的偏移量
ftell(文件流)

rewind(文件指针回到起始位置)

*/