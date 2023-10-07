//#include <stdio.h>
//
//int main()
//{
//	printf("Hello asm!\n");
//	return 0;
//}


/*
描述
不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算。
*/

//#include <stdio.h>
//
//int main() {
//    int a = 1;
//    int num = 1;
//    scanf("%d", &num);
//    printf("%d\n", 2 << (num - 1));
//    return 0;
//}





//#include <stdio.h>
//
//int main() {
//    long age = 0;
//    scanf("%ld", &age);
//    printf("%ld\n", age * 31560000);
//    return 0;
//}





//#include <stdio.h>
//
//int main() {
//    int count = 0;
//    scanf("%d", &count);
//    float score;
//    float max = 0.0;
//    float min = 100.0;
//    float sum = 0.0;
//    for (int i = 0; i < count; i++)
//    {
//        scanf("%f", &score);
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//        sum += score;
//    }
//    printf("%.2f %.2f %.2f", max, min, sum / 5);
//    return 0;
//}


#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    int n, m, h;
//    while (scanf("%d %d %d", &n, &m, &h) == 3)
//    {
//        if ((h % m) != 0)
//        {
//            printf("%d\n", n - (h / m + 1));
//        }
//        else
//        {
//            printf("%d\n", n - (h / m));
//        }
//    }
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    double num = 0.0;
//    scanf("%lf", &num);
//    printf("%.3lf", ((5 / 9.0) * (num - 32)));
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    float a, b;
//    scanf("%f %f", &a, &b);
//    printf("%lf\n", (double)((a * b) / (a + b)));
//    return 0;
//}




//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int left, right;
//    scanf("%d %d", &left, &right);
//    int k = 0;
//    int sum = 0;
//    int count = 0;
//    int arr[100];
//    int j = 0;
//    for (int i = left; i <= right; i++)
//    {
//        sum = 0;
//        int tmp = i;
//        while (tmp)
//        {
//            k = tmp % 10;
//            sum += pow(k, 4);
//            tmp /= 10;
//        }
//        if (sum == i)
//        {
//            arr[j++] = i;
//            count++;
//        }
//    }
//
//    //printf("%d ", count);
//    for (int i = 0; i < count; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    getchar();  
//    char a1, a2, a3, a4;
//    scanf("%c %c %c %c", &a1, &a2, &a3, &a4);
//
//    char str[100];
//    scanf("%s", str);
//
//    for (int i = 0; i < num; i++)
//    {
//        if (str[i] == 'a1')
//        {
//            str[i] == 'a2';
//        }
//        if (str[i] == 'a3')
//        {
//            str[i] == 'a4';
//        }
//        i++;
//    }
//    printf("%s", str);
//    return 0;
//}



#include <stdio.h>

int main()
{
	char str[200] = { 0 };
	scanf("%s", str);
	printf("%s\n", str);
	return 0;
}