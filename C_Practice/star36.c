#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=0;
    for(i=1;i<=5;i++){
            n=0;
        for(j=1;j<=i;j++){
            printf(" %d",n);
            n=n+i-1;
        }
        printf("\n");
    }
    getch();
}
