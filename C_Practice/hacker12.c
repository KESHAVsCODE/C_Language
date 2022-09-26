#include<stdio.h>
char* right(void);
void main()
{
    char *p;
    p=right();
    printf("%s",p);
}
char* right(void)
{
    int x1,x2,v1,v2,i;
    char *p;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(x1+v1==x2+v2){
        p="YES";
        return p;
    }
    else{
        p="NO";
        return p;
    }
}
