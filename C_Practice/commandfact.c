#include<stdio.h>
#include<conio.h>
int string_to_int(char *);
int main(int argc,char *argv[])
{
    int fact=1,n;
    n=string_to_int(argv[1]);
    while(n>0){
        fact=fact*n;
        n--;
    }
    printf("factorial is %d",fact);
    getch();
}
int string_to_int(char *p)
{
    int i,j;
    for(i=0,j=0;p[i];i++){
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
