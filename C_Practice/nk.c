#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,x=4,y=1,m=65;
    for(i=1;i<=6;i++){
        for(j=1;j<=x;j--){
          printf(" ");
        }
        for(k=1;k<=y;k--){
                if(k%2){
                    printf("%c",m++);
                }
                else{
                    printf("*");
                }
        }
        printf("\n");
        x--;
        y=y+2;

}
getch();
}


