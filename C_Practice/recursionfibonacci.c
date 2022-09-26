#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
    int i,j;
    printf("enter a number :");
    scanf("%d",&i);
    for(j=1;j<=i;j++){
      printf(" %d",fib(j));
    }
    getch();
}
int fib(int n)
{
    int m;
    if(n==1||n==2)
        return 1;
    else
    return fib(n-1)+fib(n-2);
}
