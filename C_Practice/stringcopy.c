#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[20]="MAHESH",h[10]="KESHAV",j[10];
    printf("enter a name :");
    strcpy(j,s);
    strcpy(s,h);
    strcpy(h,j);
    puts(s);
    puts(h);
    getch();
}

