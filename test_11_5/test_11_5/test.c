#define _CRT_SECURE_NO_WARNINGS//����Դ�ļ��ĵ�һ��vc-wcprojectitems-newc++file-�ü��±���-������仰
#include<stdio.h>
#include<string.h>

int main() 
{
	/*int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;*/                                                                              //arr
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//����һ�����10���������ֵ�����          1 2 3 4 5 6 7 8 9 10
	//0-9
	int i = 0;
	while (i<10)
	{
		printf("%d", arr[i]);
		i++;
	}

    //printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��
	//arr[�±�];
	//char ch[20];//                                                                    �±�  0 1 2 3 4 5 6 7 8 9
	//float arr2[5];//                                                                  �±�Ĭ���Ǵ�0��ʼ                     
	return 0;                                                                                  
}



//int Add(int x, int y)                                        //�Զ��庯��-���
//{                                                            //�⺯��
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);              
//	return 0;                                  
//}  


//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if (line>=20000)
//	    printf("��offer\n");
//	line ++ ;
//	return 0;
//}


//int main()
//{
//	int intput = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
//	scanf("%d", &intput);//1/0
//	if (intput == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}


/**/ //C����ע�ͷ��  ������Ƕ��

//int main()
//{
//	printf("%c\n", '\x61');
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	//printf("%c\n", '\132');
//	//\32��2���˽�������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASII��ֵ����Ӧ���ַ�                                           32
//	//32 -- > 10���� 26 -->��ΪASII��ֵ������ַ�                                                         3*8^1+2*8^0=26
//	return 0;
//}
//��Ҫ�ǵ�ASII��ֵ 48-0     57-9    65-A  97-a A��a��62
//\���� - 8����   \x���� - 16����

//����+��=]����ĸ�� \��
//int main()
//
//{
//	//printf("c:\\test\32\\test.c");//\t - ˮƽ�Ʊ��
//	//printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;                     
//}


//int main()
//{
//	printf("abc\n");
//	return 0;
//}


//ת���ַ�
//ת��ԭ������˼

//int main()
//{
//	char arr1[] = "abc";//arr1 a b c
//	char arr2[] = { 'a', 'b', 'c','\0' };//a b c xxxxxxx\0
//	printf("%d\n", strlen(arr1));//strlen - string length - string length - �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	//#av$
//	//a - 97
//	//A - 65
//	//...
//	//ASCII ����
//	//ASCII ��ֵ
//	//char arr1[] = "adc";//����
//	////"abc" -- 'a''b''c''\0' -- '\0'�ַ����Ľ�����־ \0�����ַ���
//	//char arr2[] = { 'a', 'b', 'c','\0' };
//	////'\0' - 0
//	////'a' - 97
//	////'a''b''c'
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);//��ӡ�ַ���%s
//	
//	return 0;
//}


//int float
//char
//�ַ�������
//int main()
//
//{
//	"abcdef";
//	"hello bit";
//	""://���ַ���
//
//	return 0;
//}


//4.ö�ٳ���
//ö��--�о�
//
//�Ա��У�Ů������
//��ԭɫ���죬�ƣ���
//���ڣ�1��2��3��4��5��6��7

//ö�ٹؼ� - enum
//enum Clolor
//{
//	RED,
//	YELLO,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//BLUE = 6;//err
//	return 0;
//}


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//
//};
////MALE,FEMALE,SECRET - ö�ٳ���
//int main()
//{
//	//enum Sex s = FEMALE.
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}


//3.#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	
//	return 0;
//}

                              
//int main()
//{
//	//const - ������
//	const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	//int arr[n] = {0};
//	n = 20;
//	//const���εĳ�����
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//	//���泣��
//	/*3;
//	100��
//	3.14��*/
//
//	return 0;
//}



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);            //sacnf��C�����ṩ��
//	sum = num1 + num2;                      //scanf_s���Ǳ�׼C�����ṩ���ǣ�vs�������ṩ��
//	printf("sum = %d\n", sum);              //��ƽ̨��/����ֲ��
//	return 0;                               //scanf strcpy strlen ...����ȫ strcopy_s...   
//}      
                                            