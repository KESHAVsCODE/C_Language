#include<stdio.h>
#include<conio.h>
int* max(int *,int);
void main()
{
    int *p,a[100],i,n,*k;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter %d number:",n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    k=max(&a[0],n-1);
    printf("%d",*k);
    getch();
}
int* max(int *p,int n)
{
    int i;
    for(i=0;i<=n;i++){
        if(*p<*(p+n-i)){
            *p=*(p+n-i);
        }
    }
    return p;
}
