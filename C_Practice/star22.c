#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,n,k;
    for(i=1;i<=4;i++){
            n=1;
            k=65;
        for(j=1;j<=7;j++){
            if(j>=5-i&&j<=3+i){
                if(j>=5){
                  printf("%c",k);
                  k++;
                }
                else{
                    printf("%d",n);
                    n++;
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}


