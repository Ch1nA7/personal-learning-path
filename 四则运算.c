#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define CALC_NUM 10
#define FILE_PATH  "calc.txt"
FILE *open_file(char *str)
{
	FILE *fp = fopen(FILE_PATH,str);
	if (fp == NULL)
	{
		perror(""); 
		return 0;
	}
	return fp;
}
void get_data()
{
	FILE *fp = open_file("w");
	char abb[4] = { '+', '-', '*', '/' };
	srand(time(NULL));
	int a = 0;
	int b = 0;
	char c = 0;
	char cmd[128] = "";
	for (int i = 0; i < CALC_NUM; i++)
	{
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		c = rand() % 4;
		sprintf(cmd, "%d%c%d=\n", a, abb[c], b);
		fputs(cmd, fp);
	}
	fclose(fp);
}
void read_data()
{
	FILE *fp = open_file("r");
	int  a = 0;
	int b = 0;
	char c = 0;
	char buf[128] = "";
	char cmd[128] = "";
	char buff[100][128] = { 0 };
	char *p = NULL;

	int len = 0;
	int num = 0;
	int i = 0;
	while (1)
	{
		p = fgets(buf, sizeof(buf), fp);
		if (p == NULL)
			break;
		sscanf(buf, "%d%c%d", &a, &c, &b);
		switch (c)
		{
		case '+':num = a + b; break;
		case '-':num = a - b; break;
		case '*':num = a * b; break;
		case '/':num = a / b; break;
		}
		sprintf(buff[i], "%d%c%d=%d\n", a, c, b, num);
		i++;
	}
	fclose(fp);
	fp = open_file("w");
	int j = 0;
	for (j = 0; j < i; j++)
	{
		fputs(buff[j], fp);
	}
	fclose(fp);
}

int main07()
{
	get_data();
	read_data();
	system("pause");
	return 0;
}