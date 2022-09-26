#include<stdio.h>
#include<malloc.h>
void main()
{
    int *p,n,i,d=0,e=0,f=0;
    double *q,l;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(n));
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++){
        if(*(p+i)>0)
            d++;
        else if(*(p+i)<0)
            e++;
        else if(*(p+i)==0)
            f++;
    }
    l=n;
    q=(double*)malloc(n*sizeof(double));
        *(q+0)=d/l;
        *(q+1)=e/l;
        *(q+2)=f/l;
    for(i=0;i<3;i++){
        printf("%lf\n",*(q+i));
    }
}
