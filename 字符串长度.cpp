#include<stdio.h>
int my_strlen(char*a)
{
	if(*a!='\0')
		return 1+my_strlen(a+1);
	else
	    return 0;	
	 
	
}
int main()
{
	char a[] = "bit";
	int len = my_strlen(a);
	printf("%d",len);
	return 0;
}
