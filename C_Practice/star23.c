#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,n;
    for(i=1;i<=6;i++){
            n=1;
        for(j=1;j<=6;j++){
            if(j>=1&&j<=i)
              if(j%2==0){
                printf("%d",n);
                n=!n;
              }
              else{
                printf("%d",n);
                n=!n;
              }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
