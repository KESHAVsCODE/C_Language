#include<stdio.h>
#include<conio.h>
int main()
{
    int i,fact=1,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    getch();
}
