#include<stdio.h>
#include<conio.h>
float area(int);
void main(){
    int r; double j;
    printf("enter radius of circule");
    scanf("%d",&r);
    j=area(r);
    printf("area of circule is %lf",j);
    getch();
    }
    float area(int i){
     float a;
     a=3.14*i*i;
     return a;
}

