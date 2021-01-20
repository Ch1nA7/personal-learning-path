#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main04()
{
	FILE *fp = fopen("./a.txt", "r");
	if (NULL == fp)
	{
		perror("");
		return 0;
	}
	char ch = 0;
	while (1)
	{
		ch = fgetc(fp);
		if (feof(fp))
			break;
		fputc(ch, stdout);
	}
	fclose(fp);
	system("pause");
	return 0;
}