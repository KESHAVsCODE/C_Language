#include<stdio.h>
#include<conio.h>
void main()
{
    int a[7],b[7],i=0,j,k,count=0;
    printf("enter element in array");
    for(i=0;i<=6;i++){
        scanf("%d",&a[i]);
            b[i]=a[i];
    }
    for(k=0;k<=6;k++){
    for(j=0;j<=6;j++){
      if(a[k]==b[j])
         count++;
    }
      printf("%d is %d times\n",a[i],count);
    }
    getch();
}
