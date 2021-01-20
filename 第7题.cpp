#include<stdio.h>
int i;
void move(char a,char b)
{
	printf("%c-->%c",a,b);
	printf("\n");
	i++;
}
void hanoi(int n,char a,char b,char c)
{
	if(n == 1)
	   move(a,c);
	else
	{
		hanoi(n-1,a,c,b);
		move(a,c);
		hanoi(n-1,b,a,c);
    }   
}
int main()
{
	int n;
	char a,b,c;
	scanf("%d",&n);
	hanoi(n,'a','b','c');
	printf("%d",i); 
	return 0;
}
