#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k=0,n;
    for(i=1;i<=9;i++){
        i<6?k++:k--;
        n=1;
      for(j=1;j<=5;j++){
            if(j>=6-k&j<=5){
                printf("%d",n);
             n++;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    getch();
}
