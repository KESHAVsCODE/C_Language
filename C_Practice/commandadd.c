#include<stdio.h>
#include<conio.h>
int string_to_int(char *);
int main(int argc,char *argv[])
{
    int a,i,sum=0;
    for(i=1;i<argc;i++){
      sum=sum+string_to_int(argv[i]);
    }
    printf("sum is %d",sum);
    getch();
}
int string_to_int(char *p)
{
    int i,j;
    for(i=0,j=0;p[i];i++){
        printf("\n%d",p[i]);
        if(p[i]>='0'&&p[i]<='9'){
            j=j*10+(p[i]-48);
        }
        else
            break;
    }
    if(p[i]=='-'){
        j=-j;
    }
    return(j);

}
