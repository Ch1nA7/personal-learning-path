#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	//               bit\0##########    \0是字符串结束标志就不拷贝了
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 字符串长度
//	return 0;
//}

//memset
//memory - 内存 set - 设置 
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}

//ret_type fun_name(para1, *)
//{
//	statemaent;//语句项
//}
//ret_type 返回类型
//fun_name 函数名
//para1    函数参数

//int get_max(int x, int y)//形参-形式上的参数
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{ 
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//当时实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
//void Swap1(int x, int y)//void - 无返回值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}//无法完成设计
//void Swap2(int*pa, int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//调用函数Swap1-传值调用
//	Swap1(a, b);
//	//调用函数Swap2-传址调用
//	Swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp*/;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a//pa是指针变量//a的地址拿出来是十六进制的数字
//	*pa = 20;//解引用操作是通过pa里面存的地址找到它所指向的内容
//	printf("%d\n", a);
//	return 0;
//}

//是素数返回1，不是素数返回0
//#include<math.h>
//int is_prime(int n)
//{
//	//2->n-1都试除以边
//	for (int j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	//打印100—到200之间的素数
//	for (int i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int is_leap_year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
                      //本质上arr是一个指针
//int binary_search(int arr[], int k,int sz)
//{
//	//算法的实现
//	//折半查找
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] >k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标，找不到的返回-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)        //传递过去的是数组arr首元素的地址
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d的\n", ret);
//	}
//	return 0;
//}
//


//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	//1
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));//链式访问
//	return 0;
//}
  
//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));
//	return 0;
//}


#include"add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}






