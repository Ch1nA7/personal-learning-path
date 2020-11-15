#define _CRT_SECURE_NO_WARNINGS//加在源文件的的一行vc-wcprojectitems-newc++file-用记事本打开-加上这句话
#include<stdio.h>
#include<string.h>

int main() 
{
	/*int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;*/                                                                              //arr
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//定义一个存放10个整数数字的数组          1 2 3 4 5 6 7 8 9 10
	//0-9
	int i = 0;
	while (i<10)
	{
		printf("%d", arr[i]);
		i++;
	}

    //printf("%d\n", arr[4]);//下标的方式访问元素
	//arr[下标];
	//char ch[20];//                                                                    下标  0 1 2 3 4 5 6 7 8 9
	//float arr2[5];//                                                                  下标默认是从0开始                     
	return 0;                                                                                  
}



//int Add(int x, int y)                                        //自定义函数-设计
//{                                                            //库函数
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
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if (line>=20000)
//	    printf("好offer\n");
//	line ++ ;
//	return 0;
//}


//int main()
//{
//	int intput = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>:");
//	scanf("%d", &intput);//1/0
//	if (intput == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}


/**/ //C语言注释风格  不可以嵌套

//int main()
//{
//	printf("%c\n", '\x61');
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	//printf("%c\n", '\132');
//	//\32是2个八进制数字
//	//32作为8进制代表的那个十进制数字，作为ASII码值，对应的字符                                           32
//	//32 -- > 10进制 26 -->作为ASII码值代表的字符                                                         3*8^1+2*8^0=26
//	return 0;
//}
//需要记得ASII码值 48-0     57-9    65-A  97-a A与a差62
//\数字 - 8进制   \x数字 - 16进制

//？？+）=]三字母词 \？
//int main()
//
//{
//	//printf("c:\\test\32\\test.c");//\t - 水平制表符
//	//printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;                     
//}


//int main()
//{
//	printf("abc\n");
//	return 0;
//}


//转义字符
//转变原来的意思

//int main()
//{
//	char arr1[] = "abc";//arr1 a b c
//	char arr2[] = { 'a', 'b', 'c','\0' };//a b c xxxxxxx\0
//	printf("%d\n", strlen(arr1));//strlen - string length - string length - 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	//数据在计算机上存储的时候，存储的是2进制
//	//#av$
//	//a - 97
//	//A - 65
//	//...
//	//ASCII 编码
//	//ASCII 码值
//	//char arr1[] = "adc";//数组
//	////"abc" -- 'a''b''c''\0' -- '\0'字符串的结束标志 \0不算字符串
//	//char arr2[] = { 'a', 'b', 'c','\0' };
//	////'\0' - 0
//	////'a' - 97
//	////'a''b''c'
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);//打印字符串%s
//	
//	return 0;
//}


//int float
//char
//字符串类型
//int main()
//
//{
//	"abcdef";
//	"hello bit";
//	""://空字符串
//
//	return 0;
//}


//4.枚举常量
//枚举--列举
//
//性别：男，女，保密
//三原色：红，黄，蓝
//星期：1，2，3，4，5，6，7

//枚举关键 - enum
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
////MALE,FEMALE,SECRET - 枚举常量
//int main()
//{
//	//enum Sex s = FEMALE.
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}


//3.#define 定义的标识符常量
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
//	//const - 常属性
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	//int arr[n] = {0};
//	n = 20;
//	//const修饰的常变量
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//	//字面常量
//	/*3;
//	100；
//	3.14；*/
//
//	return 0;
//}



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);            //sacnf是C语言提供的
//	sum = num1 + num2;                      //scanf_s不是标准C语言提供的是，vs编译器提供的
//	printf("sum = %d\n", sum);              //跨平台性/可移植性
//	return 0;                               //scanf strcpy strlen ...不安全 strcopy_s...   
//}      
                                            