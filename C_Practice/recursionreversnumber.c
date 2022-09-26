#include<stdio.h>
#include<conio.h>
int rev(int);
int main()
{
    int n,k;
    printf("enter a number :");
    scanf("%d",&n);
    rev(n);
}
int rev(int n)
{
    if(n==0){
        return 0;
        printf("%d",n);
    }
    else{
        printf(" %d",n);
        return rev(n-1);
    }
}
