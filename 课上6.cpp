#include<stdio.h>
#include<string.h>
int main()
{
	char destination[25];
	char blank[] = " ", c[] = "C++",turbo[] = "Turbo";
	strcpy(destination,turbo);
	strcat(destination,blank);
	strcat(destination,c);
	printf("%s\n",destination); 
	return 0;
 } 
