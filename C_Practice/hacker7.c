#include<stdio.h>
#include<malloc.h>
int main()
{
    int *p,i,c,max=0,min=0,minsum=0,maxsum=0;
    p=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        scanf("%d",p+i);
    }
    max=*(p+0);
    for(i=0;i<5;i++){
        if(max<*(p+5-i))
            max=*(p+5-i);
    }
    min=*(p+0);
    for(i=5;i>0;i++){
        if(*(p+5-i)<min)
            min=*(p+5-i);
    }
    for(i=0;i<5;i++){
        minsum=minsum+*(p+i);
        maxsum=maxsum+*(p+i);
    }
    minsum=minsum-min;
    maxsum=maxsum-max;
    printf("%d ",maxsum);
    printf("%d",minsum);
    return 0;
}
