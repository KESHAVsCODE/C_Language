#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],min,i;
    printf("enter number in array");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<=9;i++){
            if(min>a[i])
                min=a[i];
        }
    printf("minimum is %d",min);
    getch();
}

