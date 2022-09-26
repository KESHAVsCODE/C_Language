#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j,count;
    printf("enter number in  array");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    printf("unique element is:");
    for(i=0;i<=9;i++){
            count=0;
        for(j=0;j<=9;j++){
            if(a[i]==a[j])
                count++;
        }
            if(count==1){
                printf("\n%d",a[i]);
            }
    }
    getch();
}
