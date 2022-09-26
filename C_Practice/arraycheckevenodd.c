#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b[10],i,j,flag=0,count=0;
    printf("enter ten values in array");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<=9;j++){
        if(a[j]%2==0)
            count++;
        else
            flag++;
    }
    printf("even numbers in array is %d\n",count);
    printf("odd numbers in array is %d",flag);
}
