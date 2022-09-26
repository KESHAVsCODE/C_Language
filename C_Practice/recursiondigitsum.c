#include<stdio.h>
#include<conio.h>
int digitsum(int);
int main()
{
    int i,n,k;
    printf("enter a digit to sum:");
    scanf("%d",&n);
    k=digitsum(n);
    printf("%d",k);
    getch();
}
int digitsum(int n)
{
    if(n==0)
        return 0;
    else
        return n%10+digitsum(n/10);
}
