#include<stdio.h>
int max(int[],int,int);
int main()
{
    int s=10,l,a[10],i;
    printf("enter number in array :");
    for(i=0;i<=9;i++){
     scanf("%d",&a[i]);
    }
    l=a[0];
    l=max(a,s-1,l);
    printf("the max num is %d",l);
    getch();
}
int max(int a[],int s,int l)
{
    if(s>-1){
       if(a[s]>l){
         l=s;
       }
       return l=max(a,s-1,l);
    }
    else
        return l;
}
