#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j;
    printf("enter 9 element in array :");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("\n%d",a[i][j]);
        }
    }
    getch();
}
