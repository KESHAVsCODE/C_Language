#include<stdio.h>
#include<conio.h>
int fact(int);
int combi(int,int);
void passcal(int);
int fact(int n)
{
    int f=1;
    while(n>=1){
        f=n*f;
        n--;
    }
    return f;
}
int combi(int n,int r)
{
        return fact(n)/fact(n-r)/fact(r);
}
void passcal(int line)
{
    int k,l,h,r;
    for(k=1;k<=line;k++){
            h=1;
            r=0;
        for(l=1;l<=2*line-1;l++){
            if(l>=line+1-k&&l<=line-1+k&&h){
                printf(" %d",combi(k-1,r));
                h=0;
                r++;
            }
            else{
                printf("  ");
                h=1;
            }
        }
        printf("\n");
    }
}
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    passcal(a);
    getch();
}








