#include<stdio.h>
#include<conio.h>
int arm(int);
int main()
{
    int n,k;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    k=arm(n);
    if(k==n)
        printf("number is armstrong:");
    else
        printf("number is not armstrong:");
        getch();
}
int arm(int n)
{
    int j;
    if(n==0)
        return 0;
    else{
        j=n%10;
        return j*j*j+arm(n/10);
    }
}
