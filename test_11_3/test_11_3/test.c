//����һ����stdio.h���ļ�
//std-��׼ standard input output

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
	//δ�����ı�ʶ��
	//����extern�ⲿ���ŵ�
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





//����������������������������
//�������ھ�����������ʱ���






//int main()
//{
//	//�ֲ�����������
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
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf
//	scanf_s("%d%d", &num1, &num2);//ȡ��ַ����
//	
//	//c�����﷨�涨������Ҫ�����ڵ�ǰ�������ǰ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}







//int main()
//{
//	{
//		int a = 10;//�ֲ�-���ڴ�������//����main������ı����Ǿֲ�����but�ֲ��������Ƕ�����main������
//		           //ȫ��-���Ķ�������-�ٴ�������ⲿ�ı���
//	}
//	printf("%d\n", a);
//	return 0;
//}



//int a = 100;
//int main()
//{
//	//int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-���ײ�����ᣬ����bug
//	//���ֲ�������ȫ�ֱ����������ͬ��ʱ�򣬾ֲ���������
//	printf("%d\n", a);
//	return 0;
//}














//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ���飨{}���ڲ�
//
//	return 0;
//}



//int main()
//{
//	//����
//	//20
//	short int age = 20;//���ڴ����������ֽ�=16bitλ���������20
//	//���� ������ ��ֵ�����������
//	float weight = 95.6f;//���ڴ�������4���ֽڣ����С��
//	return 0;
//}


//int main()
//{
	//printf("%d\n", sizeof(char));//1�ֽ�                       �ֽ�               �������Ӳ�� -- ͨ��                                    C���Ա�׼�涨
	//printf("%d\n", sizeof(short));//2�ֽ�(2^16)(2�������У�    ������е�λ        ����  ����               ������                        sizeof��long��>=sizeof(int)   
	//printf("%d\n", sizeof(int));//4�ֽ�(2^32)(0-2^32-1)        bit - ����λ        1      0       (һ��0/1ռһ��bit)                 
	//printf("%d\n", sizeof(long));//4�ֽ�/8�ֽ�                 byte - �ֽ�(һ���ֽ�=8��bit�Ĵ�С��           ʮ����  
	//printf("%d\n", sizeof(long long));//8�ֽ�                  kb(1kb=1024byte��                             0 1 2 3 4 5 6 7 8 9
	//printf("%d\n", sizeof(float));//4�ֽ�                      mb��1024kb)                                              
	//printf("%d\n", sizeof(double));//8�ֽ�                     gb (1024mb)                                    ������
	
	//short age = 20;//2 16 2^16-1=65535
	//int age = 20;//4
	//return 0;                                                 //tb (1024gb)                                  0 1
//}                                                             //pb (1024tb)                                  8����  
                                                             //                                              0 1 2 3 4 5 6 7               
//char-�ַ�����                                                                                             
//%d - ��ӡ����                                                                                                                                        �ֽ�����-����/����ͷ��/������Ƶ
                                                                                                                                                       //byte dance          
//%c - ��ӡ�ַ�                                                                                                                                        30w+        
//%f - ��ӡ��������-��С��                                  123 ʮ��������               010                                                           6000+      
//%p - �Ե�ַ����ʽ��ӡ                                     3*10^0+2*10^1+1*10^2         0*2^2+1*2^1+0*2^0                                                                                                             
//%x - ��ӡʮ����������                                     3+20+100=123                 0+2+0=2                                                                                                                         
//%o...                                                                                             
//int main()//������-��������-main�������ҽ���һ��
//{
	//char ch = 'A';//�ڴ�
	//printf("%c\n", ch);//%c -- ��ӡ�ַ���ʽ������
	//short int - ������
	//int - ����
	//int age = 20;
	//printf("%d\n",age);//%d -- ��ӡ����ʮ��������
	//long ������
	//long num = 100;
	//printf("%d\n", num);
	//float f = 5.0;
	//printf("%f\n", f);
	//double d = 3.14;
	//printf("%lf\n", d);
	//return 0;
//}

//{
	//�����������
	//����Ļ�����hello world
	//����-print funtion - ��ӡ����
	//�⺯��-C���Ա����ṩ������ʹ�õĶ���
	//���˵Ķ���-���к�
	//#include
	//printf("hello world!\n");
	//return 0;
//}
//int �����͵���˼
//mainǰ���int��ʾmain�����÷���һ������ֵ
//int main()
//{
//	return 0;//���� 0
//}
//c����                                            
//.c-Դ�ļ�                        
//.h-ͷ�ļ� head
//����-������-��ϵͳ-����̨









