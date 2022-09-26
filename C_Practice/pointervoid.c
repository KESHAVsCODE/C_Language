#include<stdio.h>
#include<conio.h>
void main()
{
    void *p;
    int a=20;
    p=&a;
    printf("%d",*(int*)p);//type casting
    getch();
}
