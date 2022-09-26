#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q,n,i,k,c,l,m;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    q=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
            k=*(p+i)/10;
            c=*(p+i)%10;
        if(*(p+i)<38)
            *(q+i)=*(p+i);
           else if(*(p+i)>=38&&c>5){
                  c=0;
                  ++k;
                  l=k*10+c-*(p+i);
                  m=k*10+c;
                  l<3?*(q+i)=m:(*(q+i)=*(p+i));
            }
            else if(*(p+i)>=38&&c<5){
                c=5;
                l=k*10+c-*(p+i);
                m=k*10+c;
                l<3?*(q+i)=m:(*(q+i)=*(p+i));
            }
            else if(*(p+i)>=38&&c==5||c==0){
                *(q+i)=*(p+i);
            }
    }
    for(i=0;i<n;i++){
        printf("%d\n",*(q+i));
    }
}
