#include<stdio.h>
#include<conio.h>
void main()
{
    long long a[10],i,sum=0,n;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%ld",&a[i]);
    }
    for(i=0;i<=n-1;i++){
        sum=sum+a[i];
    }
    printf("%ld",sum);
    getch();
}

