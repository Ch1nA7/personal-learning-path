#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "Hello",str2[] = "How are you?",str[20];
	int len1,len2,len3;
	len1 = strlen(str1);
	len2 = strlen(str2);
	if(strcmp(str1,str2)>0)
	{
		strcpy(str,str1);strcat(str,str2);
	}
	else if(strcmp(str1,str2)<0)
	{
		strcpy(str,str2); strcat(str,str1);
	}
	else strcpy(str,str1);
	len3 = strlen(str);
	puts(str);
	printf("len1= %d,len2 = %d,len3 = %d",len1,len2,len3);
	return 0;
 } 
