#include<stdio.h>
int main()
{
    int *p,*q,*r,*b,n,m,i=0,count=0;
    scanf("%d %d",&n,&m);
    p=(int*)calloc(n,4);
    q=(int*)calloc(m,4);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d",&q[i]);
    }
    r=(int*)calloc(q[0]/p[n-1],4);
    b=(int*)calloc(q[0]/p[n-1],4);
    int a=p[n-1];
    int c=q[0];
    i=0;
    while(a<c)
    {
        r[i]=p[n-1]*(i+1);
        i++;
        a=p[n-1]*(i+1);
    }
    for(i=0;r!='\0';i++){
        for(int j=0;j<n;j++){
            if((r[i]/p[j])%2==0){

            }
            if(j=n-1){
                count++;
            }
    }
    printf("%d",count);
}
}
