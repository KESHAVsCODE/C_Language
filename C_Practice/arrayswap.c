#include<stdio.h>
#include<conio.h>
void main()
{
    int a[7],b[7],c[7],i;
    printf("enter numbers in first array :");
    for(i=0;i<=6;i++){
        scanf("%d",&a[i]);
    }
    printf("enter numbers in second array :");
    for(i=0;i<=6;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<=6;i++){
    a[i]=a[i]+b[i];
    b[i]=a[i]-b[i];
    a[i]=a[i]-b[i];
    }
    for(i=0;i<=6;i++){
        printf("\n%d",a[i]);
    }
    for(i=0;i<=6;i++){
        printf("\n%d",b[i]);
    }
    getch();
}
