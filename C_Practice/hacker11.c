#include<stdio.h>
void main()
{
    int s,t,a,b,*p,*q,APP,ORA,i,count=0,flag=0;
    scanf("%d %d",&s,&t);//s=starting point of sam's house t=ending point of sam's house
    scanf("%d %d",&a,&b);//a=apple tree location b=orange tree location
    scanf("%d %d",&APP,&ORA);
    p=(int*)calloc(APP,4);
    q=(int*)calloc(ORA,4);
    for(i=0;i<APP;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<ORA;i++){
        scanf("%d",&q[i]);
    }
    for(i=0;i<APP;i++){
        p[i]=p[i]+a;
        if(p[i]>=a){
            count++;
        }
    }
    for(i=0;i<ORA;i++){
        q[i]=q[i]+b;
        if(q[i]<=b){
            flag++;
        }
    }
    printf("%d\n%d",count,flag);

}
