#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
// 数据类型：
// 内置的：int、short...
// 自定义的：struct、enum...



//#include <stdio.h>
//
//int main() {
//    printf("Hello Nowcoder!\n");
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d\n", a);
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    double num = 0;
//    scanf("%lf", &num);
//    printf("%.3lf", num);
//    return 0;
//}



// 0 - 数字0
// '0' - 字符'0'  ASCII 码 为 48
// '\0' - 字符    ASCII 码 为 0
// EOF end of file 文件的结束标志  值是-1

// 数组在创建的时候，如果不初始化，必须要在[] 内规定数值

// char arr[4] = {'a', 'b', 'c'};
// 不完全初始化，最后一个元素默认初始化为0， 
// 数字0 和 ‘\0’ 是相同的效果

//int main()
//{
//	char arr[4] = { 'a', 'b', 'c' };
//	arr[3] = '\0';
//	//arr[3] = 0;
//	printf("%s\n", arr);
//	return 0;
//}


// C99 标准之前， 数组的大小都是用常量或者常量表达式来指定
// C99 标准之后， 支持了边长数组，这个时候允许数组的大小是变量，但是这种指定方式的数组是不能初始化的

// VS对C99的一些语法支持不是很好，不支持边长数组



//-------------------------------------------------------------------------------------------------------------------

// 操作符：
// C语言提供了非常丰富的操作符

// 算术操作符：+ - * / %
// 移位操作符：<< >>
//int main()
//{
//	int a = 7 / 2;
//	printf("%d\n", a);// 3
//	// 除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
//	int b = 7 % 2;
//	printf("%d\n", b);// 1
//	float c = 7 / 2.0;
//	printf("%.2f\n", c);
//	// %.2f 表示 输出保留小数点后两位
//	// %15d 表示 输出域宽为15位
//	return 0;
//}

// 取模操作符的两个操作数只能是整数

// 位操作符：& ^ |
// 赋值运算符： = += -= *= /= &= ^= |= <<= >>=
// 单目操作符：!逻辑取反 -负值 +正值 &取地址 sizeof() 
// ~按位取反 --自减 ++自增 *解引用、间接访问操作符 ()强制类型转换

// C语言中，0为假，非0为真

//int main()
//{
//	int a = 10;
//  int arr[10] = { 0 };
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//  printf("%d\n", sizeof(arr));
//  printf("%d\n", sizeof(arr) / sizeof(a)); 元素个数
//	return 0;
//}
// sizeof() 是一个操作符,单位是字节

//int main()
//{
//	//int a = 10;
//	//int b = a++;
//	int a = 10;
//	int b = ++a;
//	// 前置++，先++用后使用， 后置++ ，先使用后++
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

// 字面浮点常量 默认是 double 类型
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	if (a = 3) // = 赋值 == 判断
//	{
//		printf("HH\n");
//	}
//	return 0;
//}

// 关系运算符： > < <= >=

// 逻辑运算符： && 逻辑与 || 逻辑或
//int main()
//{
//	int a = 10, b = 20;
//	if (a && b)
//	{
//		printf("hh\n");
//	}
//}

// && 前为假，后面不执行， || 前为真，后面不执行

// 条件操作符（三目运算符）
// a > b ? c : d
// a > b 若为真，返回c的值，若为假，返回d的值

// 逗号表达式：从左向右依次计算，整个表达式的结果，是最后一个表达式的结果	

// arr[3]  arr 和 3 [] 的 操作数
// add(2, 3)   add 和 2、3 都是 () 的操作数

// 常见的关键字
// switch...case    if...else               
// do...while     continue  循环内使用   break(跳出循环)    goto
// const(修饰变量，常变量)   
// enum-枚举     struct-结构体     union-联合体
// extern 声明外部符号
// register 寄存器
// return 函数返回值
// signed 有符号的   unsigned 无符号的  static 静态的   auto(自动变量，所有的局部变量前面默认都有一个auto)
// void (空、无)  typedef  类型重命名  sizeof 计算大小

// 变量命名不可以使用关键字
// 数字 字母 下户线
// 不能以数字开头
// 要有意义，见名直到意思 
