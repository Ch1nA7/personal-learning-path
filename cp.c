#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *src = fopen("./dage.jpg", "rb");
	if (NULL == src)
	{
		perror("");
		return -1;
	}
	FILE *dst = fopen("./my_dage.jpg", "wb");
	if (NULL == dst)
	{
		perror("");
		return -1;
	}
	char ch = 0;
	//char buf[1024] = "";
	//char *p = NULL;
	while (1)
	{
		//memset(buf, 0, sizeof(buf));
		//p = fgets(buf, sizeof(buf), src);
		ch = fgetc(src);
		//if (p == NULL)
			//break;
		if (feof(src))
			break;
		//fputs(buf, dst);
		fputs(ch,dst);
	}
	fclose(src);
	fclose(dst);
	system("pause");

	return 0;
}