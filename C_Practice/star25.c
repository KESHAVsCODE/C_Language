#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k=0,n=-1,l=3;
    for(i=1;i<=21;i++){
            i<12?k++:k--;
             if(i>11){
                n=11-l;
                l++;
            }
        for(j=1;j<=21;j++){
            if(j>=12-k&&j<=10+k){
                j<12?n++:n--;
                printf(" %d",n%10);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
}

