#include<stdio.h>
int main()
{
    char str[3][20];
    int i;
    for(i = 0;i<3;i++)
        gets(str[i]);
    printf("%s",str[1]);
    return 0; 
}
