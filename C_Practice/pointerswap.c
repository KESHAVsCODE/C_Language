#include<conio.h>
#include<stdio.h>
void main()
{
    int a[100],b[100],*p1,*p2,i,k,n;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter %d number for first array:",n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    p1=a;
    printf("enter %d number for second array:",n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&b[i]);
    }
    p2=b;
    for(i=0;i<=n-1;i++){
        k=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=k;
    }
    for(i=0;i<=n-1;i++){
        printf("%d\n",*(p1+i));
    }
    for(i=0;i<=n-1;i++){
        printf("%d\n",*(p2+i));
    }
    getch();
}
