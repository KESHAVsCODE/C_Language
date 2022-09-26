#include<stdio.h>
#include<limits.h>
#include<conio.h>
#define LONG_LONG_MAX
int i=1;
void sum()
{
    printf("%d ",i++);
    sum();
}
void main()
{
    sum();
    getch();
}
