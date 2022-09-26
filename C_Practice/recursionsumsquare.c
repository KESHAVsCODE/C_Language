#include<stdio.h>
#include<math.h>
#include<conio.h>
int square(int);
int main()
{
    int n,k;
    printf("enter a number :");
    scanf("%d",&n);
    k=square(n);
    printf("sum of square is %d",k);
    getch();
}
int square(int n)
{
    if(n==1)
        return 1;
    else
        return n*n+square(n-1);
}
