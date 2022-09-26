#include<stdio.h>
#include<conio.h>
int revsqu(int);
int main()
{
    int n,k;
    printf("enter a number :");
    scanf("%d",&n);
    revsqu(n);
    getch();
}
int revsqu(int n)
{
    if(n==0)
        return 0;
    else
        printf(" %d",n*n);
        return revsqu(n-1);
}
