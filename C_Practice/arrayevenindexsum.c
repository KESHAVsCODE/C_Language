#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,k=0;
    printf("enter number in array :");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++){
            if(i%2==0)
            k=k+a[i];
    }
    printf("%d",k);
    getch();
}
