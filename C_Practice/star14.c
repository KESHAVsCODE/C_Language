#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,n;
    for(i=1;i<=7;i++){
            n=7-i;
        for(j=1;j<=7;j++){
            if(j<=8-i){
            printf("%d ",n);
            n--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}


