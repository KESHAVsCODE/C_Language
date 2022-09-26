#include<stdio.h>
#include<conio.h>
void main(){
    int a[10],i,sum=0,mum=0;
    printf("enter 10 number");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    if(a[i]%2==0)
        sum=sum+a[i];
    else
        mum=mum+a[i];
    printf("sum of even number is %d\n",sum);
    printf("sum of odd number is %d",mum);
    getch();
}

