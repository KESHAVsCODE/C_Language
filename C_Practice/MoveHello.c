#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
        system("cls");
        for(int i=0;i<=2;i++){
            for(int j=0;j<=4;j++){
                if(j>=2-i&&j<=i+2){
                printf("*");
                sleep(1);
                }
                else
                printf(" ");
            }
            printf("\n");
        }
}
