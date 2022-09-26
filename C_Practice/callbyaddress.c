#include<stdio.h>
#include<conio.h>
int swap(int*,int*);
void main()
{
    int i,j;
    printf("enter two number:");
    scanf("%d %d",&i,&j);
    swap(&i,&j);
    printf("%d %d",i,j);
}
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
