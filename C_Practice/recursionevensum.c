#include<stdio.h>
#include<conio.h>
int evensum(int);
int main()
{
    int i,n,k;
    printf("enter number to sum even values :");
    scanf("%d",&n);
    k=evensum(n);
    printf("%d",k);
    getch();
}
int evensum(int i)
{
    if(i%2==1)
      i=i-1;
        if(i==2)
          return 2;
        else
          return i+evensum(i-2);
}
