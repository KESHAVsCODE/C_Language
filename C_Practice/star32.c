#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k=0,l=0;
    for(i=1;i<=5;i++){
         i<=3?k++:k--;
         i<=3?l++:l--;
        for(j=1;j<=5;j++){
            if(k==j || j==6-l){
                printf(" *");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
}
