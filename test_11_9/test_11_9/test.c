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
//	//               bit\0##########    \0���ַ���������־�Ͳ�������
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy - string copy - �ַ�������
//	//strlen - string length - �ַ�������
//	return 0;
//}

//memset
//memory - �ڴ� set - ���� 
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
//	statemaent;//�����
//}
//ret_type ��������
//fun_name ������
//para1    ��������

//int get_max(int x, int y)//�β�-��ʽ�ϵĲ���
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

//��ʱʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
//void Swap1(int x, int y)//void - �޷���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}//�޷�������
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
//	//���ú���Swap1-��ֵ����
//	Swap1(a, b);
//	//���ú���Swap2-��ַ����
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
//	int* pa = &a//pa��ָ�����//a�ĵ�ַ�ó�����ʮ�����Ƶ�����
//	*pa = 20;//�����ò�����ͨ��pa�����ĵ�ַ�ҵ�����ָ�������
//	printf("%d\n", a);
//	return 0;
//}

//����������1��������������0
//#include<math.h>
//int is_prime(int n)
//{
//	//2->n-1���Գ��Ա�
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
//	//��ӡ100����200֮�������
//	for (int i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
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
                      //������arr��һ��ָ��
//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨��ʵ��
//	//�۰����
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
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
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷��أ���������±꣬�Ҳ����ķ���-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)        //���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d��\n", ret);
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
//	printf("%d\n", strlen("abc"));//��ʽ����
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
	//��������
	sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}






