#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//史上最简单的递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234 
//	//递归
//	print(num);
//	//print(1234)
//	//print(123)  4
//	//print(12） 3 4
//	//print(1) 2 3 4
//
//	return 0;
//}


//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归的方法
//int my_strlen(char*str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////把大事化小
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0;
////3
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//
//	//模拟实现了一个strlen的函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 2; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac2(n - 1);
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}

//斐波那契数列
//1 1 2 3 5 8 13 21 34 55...
//
//描述第n个斐波那契数列的时候

//int count = 0;
//



int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD—测试驱动开发
	ret = Fib(n);
	printf("ret = %d\n", ret);
	//printf("count = %d\n", count);
	return 0;
}






