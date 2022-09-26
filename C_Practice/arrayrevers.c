#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j;
    printf("enter numbers");
    for(i=0;i<=9;i++){
      scanf("%d",&a[i]);
    }
    for(j=9;j>=0;j--){
       printf("%d\n",a[j]);
    }
       getch();
}

