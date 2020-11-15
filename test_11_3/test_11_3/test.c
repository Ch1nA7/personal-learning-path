//包含一个叫stdio.h的文件
//std-标准 standard input output

#include<stdio.h>






//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//ok
//	}
//	printf("a = %d\n", a);//error
//	return 0;
//}







int main()
{
	//未声明的标识符
	//声明extern外部符号的
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
}


//int global = 2020;
//void test()
//{
//	printf("test() -- %d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}





//作用域哪里可以用哪里就是作用域
//生命周期就是他的生存时间段






//int main()
//{
//	//局部变量作用域
//
//	int num = 0;
//	{
//		printf("num =%d\n", num);
//	}
//	
//	
//	return 0;
//}



//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf_s("%d%d", &num1, &num2);//取地址符号
//	
//	//c语言语法规定，变量要定义在当前代码的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}







//int main()
//{
//	{
//		int a = 10;//局部-必在大括号内//放在main函数里的变量是局部变量but局部变量不是都放在main函数里
//		           //全局-在哪都可以用-再打大括号外部的变量
//	}
//	printf("%d\n", a);
//	return 0;
//}



//int a = 100;
//int main()
//{
//	//int a = 10;
//	//局部变量和全局变量的名字建议不要相同-容易产生误会，产生bug
//	//当局部变量和全局变更的名字相同的时候，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}














//int num2 = 20;//全局变量-定义在代码块（{}）之外的变量
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块（{}）内部
//
//	return 0;
//}



//int main()
//{
//	//年龄
//	//20
//	short int age = 20;//向内存申请两个字节=16bit位，用来存放20
//	//类型 变量名 赋值（定义变量）
//	float weight = 95.6f;//向内存申请了4个字节，存放小数
//	return 0;
//}


//int main()
//{
	//printf("%d\n", sizeof(char));//1字节                       字节               计算机是硬件 -- 通电                                    C语言标准规定
	//printf("%d\n", sizeof(short));//2字节(2^16)(2进制序列）    计算机中单位        正电  负电               二进制                        sizeof（long）>=sizeof(int)   
	//printf("%d\n", sizeof(int));//4字节(2^32)(0-2^32-1)        bit - 比特位        1      0       (一个0/1占一个bit)                 
	//printf("%d\n", sizeof(long));//4字节/8字节                 byte - 字节(一个字节=8个bit的大小）           十进制  
	//printf("%d\n", sizeof(long long));//8字节                  kb(1kb=1024byte）                             0 1 2 3 4 5 6 7 8 9
	//printf("%d\n", sizeof(float));//4字节                      mb（1024kb)                                              
	//printf("%d\n", sizeof(double));//8字节                     gb (1024mb)                                    二进制
	
	//short age = 20;//2 16 2^16-1=65535
	//int age = 20;//4
	//return 0;                                                 //tb (1024gb)                                  0 1
//}                                                             //pb (1024tb)                                  8进制  
                                                             //                                              0 1 2 3 4 5 6 7               
//char-字符类型                                                                                             
//%d - 打印整型                                                                                                                                        字节跳动-抖音/今日头条/西瓜视频
                                                                                                                                                       //byte dance          
//%c - 打印字符                                                                                                                                        30w+        
//%f - 打印浮点数字-打小数                                  123 十进制数字               010                                                           6000+      
//%p - 以地址的形式打印                                     3*10^0+2*10^1+1*10^2         0*2^2+1*2^1+0*2^0                                                                                                             
//%x - 打印十六进制数字                                     3+20+100=123                 0+2+0=2                                                                                                                         
//%o...                                                                                             
//int main()//主函数-程序的入口-main函数有且仅有一个
//{
	//char ch = 'A';//内存
	//printf("%c\n", ch);//%c -- 打印字符格式的数据
	//short int - 短整型
	//int - 整型
	//int age = 20;
	//printf("%d\n",age);//%d -- 打印整型十进制数据
	//long 长整型
	//long num = 100;
	//printf("%d\n", num);
	//float f = 5.0;
	//printf("%f\n", f);
	//double d = 3.14;
	//printf("%lf\n", d);
	//return 0;
//}

//{
	//这里完成任务
	//在屏幕上输出hello world
	//函数-print funtion - 打印函数
	//库函数-C语言本身提供给我们使用的东西
	//别人的东西-打招呼
	//#include
	//printf("hello world!\n");
	//return 0;
//}
//int 是整型的意思
//main前面的int表示main函数用返回一个整型值
//int main()
//{
//	return 0;//返回 0
//}
//c代码                                            
//.c-源文件                        
//.h-头文件 head
//属性-链接器-子系统-控制台









