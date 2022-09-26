#include<stdio.h>
#include<conio.h>
int square(int);
int main(){
int i,l;
printf("enter a number");
scanf("%d",&i);
l=square(i);
printf("square of number is %d",l);
getch();
}
int square(int j){
    int k=0;
 while(j>=1){
    k=k+j*j;
    j--;
 }
 return k;
}
