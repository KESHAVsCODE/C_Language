#include<stdio.h>
#include<conio.h>
void main()
{
    int a[7],b[7],i,count=0,j;
    printf("enter number in array :");
    for(i=0;i<=6;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=6;i++){
        if(a[i]!=-1){
            count=1;
           for(j=i+1;j<=6;j++){
             if(a[i]==a[j]){
               count++;
               a[j]=-1;
              }
            }
            b[i]=count;
        }
    }
    for(i=0;i<=6;i++){
        if(a[i]!=-1)
         printf("\nno. of %d is %d times",a[i],b[i]);
    }
    getch();
}
