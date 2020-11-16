#include<stdio.h>
#include<string.h> 
int main()
{
	char a[] = "bit";
	char b[] = "*******";
	strcpy(b,a);
	printf("%s\n",b);
	int len = strlen(b);
	printf("%d\n",len);
	strcat(b,a);
	printf("%s\n",b);
	memset(b,'*',2);
	printf("%s\n",b);
	return 0;
 } 
