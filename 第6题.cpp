#include<stdio.h>
int main()
{
	char s[60];
	char t[40];
	gets(s);
	gets(t);
	for(int i = 0;s[i]!='\0';i++)
	{
		if(s[i]=='\0') break;
		if(s[i]=t[0])
		{
			for(int j = 1;;j++)
			{
				if(s[i+j]!=t[j]) break;
				if(t[j]=='\0')
				{
					printf("yes ");
					printf("%d",i+1);
					return 0;
				}
			}
		}
	} 
	printf("no\n"); 
	return 0;
 } 
