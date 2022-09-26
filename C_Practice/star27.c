#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,n=1;
    for(i=1;i<=4;i++){
        for(j=1;j<=7;j++){
            if(j>=5-i&&j<=3+i){
                printf("%d",n);
               j>3?n++:n--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

