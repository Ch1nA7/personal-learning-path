#include<stdio.h>
#include<string.h> 
int main()
{
	char s[] = "\x69";
	int len = strlen(s);
	printf("%d",len);
	return 0;
 } 
