#include<stdio.h>
#include<conio.h>
void main(){
   int i,j;
   char n;
   for(i=1;i<=4;i++){
        n=65;
    for(j=1;j<=8;j++){
        if(j>=5-i&&j<=4+i){
          if(j==5)
            n='1';
          printf("%c",n);
           n++;
        }
        else
            printf(" ");
    }
    printf("\n");
   }
   getch();
}

