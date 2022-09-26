#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a=-1,b=1,c;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=a+b;
       printf(" %d",c);
         a=b;
         b=c;
    }
}

