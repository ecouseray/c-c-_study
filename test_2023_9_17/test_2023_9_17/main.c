#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

// 结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
// 复杂对象
// eg : 人
//    : 书
// 描述复杂对象，就要使用到结构体
// 
//

//struct Peo// 这个是类型，就和int、double一样的
//{
//	char name[20];
//	char sex[10];
//	char tel[15];
//	double high;
//};
//}p1, p2; // 这里的p1 和 p2 是两个全局结构体变量

// 类型  ----------------------  结构体变量
//  类   ---------------------   对象
// 图纸  ----------------------  房子


// 结构体可以在函数内定义，但是定义后只能在该函数内使用。
// 一般不会这样写
//int main()
//{
//	struct Peo p1;
//	return 0;
//}

// 结构体内成员可以是：标量、数组、指针、结构体


//struct Peo
//{
//	char name[20];
//	char sex[10];
//	char tel[15];
//	double high;
//};
//
//struct Stu
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//int main()
//{
//	struct Peo p1 = { "张三","男","18888888888", 178.2 };
//	struct Stu s1 = { {"李四","男","18888888888"}, 100, 3.14f };
//	return 0;
//}

// 结构体传参
// 传地址           效率更高
// 传变量（对象）    较为浪费空间和时间
//
//struct Peo
//{
//	char name[20];
//	char ID[20];
//	char sex[10];
//	char address[64];
//};
//void printStruct1(struct Peo* pTheStruct)
//{
//	printf("%s\n%s\n%s\n%s\n", pTheStruct->name, pTheStruct->ID, pTheStruct->sex, pTheStruct->address);
//}
//void printStruct2(struct Peo theStruct)
//{
//	printf("%s\n%s\n%s\n%s\n", theStruct.name, theStruct.ID, theStruct.sex, theStruct.address);
//}
//int main()
//{
//	struct Peo yzk = { "yzk", "622301200000000000", "男", "地球村" };
//	printStruct1(&yzk);
//	printStruct2(yzk);
//	return 0;
//}


// 求二进制中1的个数
// 得到十进制的每一位：我们的操作是 %10 /10,那么得到二进制中的每一位我们可以类比操作：%2，/2  
//
//


//int countNumOf1(unsigned int n)
////int countNumOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//int countNumOf1(int n)
//{
//	// n & 1  == 1 说明最后一位二进制是1， == 0 说明最后一位二进制是0
//	int count;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1) // 这一行怎么写： 让n>>i位，从0开始， 之后 & 1，看结果等不等于 1
//		{
//			count++;
//		}
//	}
//}



// n = 15
// n = n&(n-1) // 让n的二进制序列中最右边的1就去掉了
// 1111 n
// 1110 n - 1
// 1110 n
//
// 1110 n
// 1101 n -1
// 1100 n 
//


// 一种很奇妙的解法 
//  
//int countNumOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//最后一位如果是0，-1之后，向前借一位
//		count++;
//	}
//	return count;
//}

// 确定一个数是不是2的n次方
// 2 ^ 1 = 10
// 2 ^ 2 = 100
// 要是二的n次方，他的二进制序列中一定只有一个1 
//
//if ((n & n -1) == 0)
// 而这个地方 n & n - 1 能去掉一个 1 ，只要他的结果为 0 说明这个数一定是2的n次方


// 两个整数二进制序列中有多少位不同
// 拿到每一位二进制，之后比较
// ^ 之后，再拿每一位，看有几个1 n & n - 1



//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//		printf("%d ", (num >> i) & 1);
//}