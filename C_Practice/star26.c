#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    char n;
    for(i=1;i<=4;i++){
            n=64+i;
        for(j=1;j<=4;j++){
            if(j>=1&&j<=i){
                printf("%c",n--);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
