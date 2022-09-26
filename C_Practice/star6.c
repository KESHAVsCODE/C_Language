#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k;
     for(i=1;i<=5;i++){
            k=1;
        for(j=1;j<=9;j++){
            if(j>=10-i&&j<=8+i&&k){
               printf("*");
               k=0;
            }
            else{
               printf(" ");
               k=1;
            }
         }
         printf("\n");
       }
     getch();
}


