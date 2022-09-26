#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n,large,count=0;
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    large=*(p+0);
    for(i=n-1;i>=00;i--){
        if(large<*(p+i)){
            large=*(p+i);
        }
    }
    for(i=0;i<n;i++){
        if(*(p+i)==large)
            count++;
    }
    printf("%d",count);
    return 0;
}
