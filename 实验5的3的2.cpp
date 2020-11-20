#include<stdio.h>
#include<string.h>
int main()
{
	char f[20] = "jdfsdjf DSFUTDSU ";
	char t[20];
	int i,j = 0; 
	printf("please input f:\n");
	puts(f);
	for(i = 0;f[j]!='\0';i++,j++)
		t[i] = f[j];
	printf("please output t:\n");
	puts(t);
	return 0;
}

