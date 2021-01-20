#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main02()
{
	FILE *fp = fopen("./a.txt", "r");
	if (NULL == fp)
	{
		perror("");
		return 0;
	}
	//char ch = fgetc(fp);
	//printf("%c\n", ch);
	char buf[128] = "";
	int i = 0;
	do{
		buf[i] = fgetc(fp);
		i++;
	} while (!feof(fp));
	printf("%s\n", buf);
	return 0;
}