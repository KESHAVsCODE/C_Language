#include<stdio.h>
#include<conio.h>
int evod(int);
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    evod(n);
    getch();
}
int evod(int n)
{
    if(n==0)
        return 0;
    else{
            printf(" %d",n);
    }
       return evod(n-2);
}
