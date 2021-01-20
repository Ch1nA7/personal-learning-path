#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main01()
{
	FILE *pf = fopen("./a.txt", "w");
	if (NULL == pf)
	{
		perror("");
		return 0;
	}
	char buf[10] = {97,98,99};
	int i = 0;
	while (buf[i] != 0)
	{
		fputc(buf[i], pf);
		i++;
	}
	fclose(pf);
	system("pause");
	return 0;
}