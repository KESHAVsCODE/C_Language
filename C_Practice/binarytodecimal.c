#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int bin,j,dec=0,n=0;
printf("enter a binary number");
scanf("%d",&bin);
while(bin){
j=bin%10;
dec=dec+pow(2,n)*j;
bin=bin/10;
n++;
}
printf("decimal value is %d",dec);
getch();
}

