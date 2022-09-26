#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10]={8,4,2,5,3,2,3,3,9,7},*p,i;
    p=&a[0];
    for(i=1;i<=9;i++){
        if(*p>*(p+i)){
           *p=*(p+i);
        }
    }
    printf("%d\n",*p);
    getch();
}
