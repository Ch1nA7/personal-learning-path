#include<stdio.h>
int is_leapyear(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0))
	   return 1;
	else 
	   return 0;   
}
int getDaysInMonth(int year,int month)
{
    int days=0;
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		days=31;
	else if(month==2)
	{
	    if(is_leapyear(year))days=29;
		else days=28;
	}
	else
			days=30;
		return days;
}
int getNextDay(int year,int month,int days)
{
	if((days+1)>getDaysInMonth(year,month))
	{
		if(month==12)
			printf("%d/%d/%d",year+1,01,01);
		else 
			printf("%d/%d/%d",year,month+1,01);
	}
		else
			printf("%d/%d/%d",year,month,days+01);
}
int main()
{
	int year,month,days;
	scanf("%d%d%d",&year,&month,&days);
	getNextDay(year,month,days);
	return 0;	
}
