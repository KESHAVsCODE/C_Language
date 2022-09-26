#include<stdio.h>
int count(int,int);
int main()
{
    int n,c=0,k;
    printf("enter a number :");
    scanf("%d",&n);
    k=count(n,c);
    printf("%d",k);
    getch();
}
int count(int n,int c)
{
    if(n==0)
        return (c);
    else{
        n=n/10;
        c++;
        return count(n,c);
    }
}
