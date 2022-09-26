#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,b[3][3],s=0;
    printf("ENTER NINE ELEMENT IN  ARRAY :");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            s=s+a[i][j];
        }
    }
    printf("sum of 2d array is %d",s);
    getch();
}


