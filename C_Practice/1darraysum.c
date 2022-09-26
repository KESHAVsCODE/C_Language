#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],b[5],c[5],i;
    printf("enter element in first array :");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element in second array :");
    for(i=0;i<=4;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<=4;i++){
        c[i]=a[i]+b[i];
    }
    printf("sum of array is");
    for(i=0;i<=4;i++){
        printf("\n%d",c[i]);
    }
    getch();
}
