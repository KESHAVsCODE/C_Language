#include<stdio.h>
#include<conio.h>
void main(){
int val,re,i=1,binary=0;
printf("enter a decimal number");
scanf("%d",&val);
while(val){
    re=val%2;
    val=val/2;
    binary=binary+re*i;
    i=i*10;
}
printf("binary value is %d",binary);
getch();
}
