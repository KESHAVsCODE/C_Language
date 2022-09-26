#include<stdio.h>
#include<conio.h>
int fact(int*);
void main()
{
    int *p,i;
    printf("enter a number :");
    scanf("%d",&i);
    fact(&i);
}
int fact(int *p)
{
    if(*p==1)
        return p;
    else
        return (*p) * fact((*p-1));
}
