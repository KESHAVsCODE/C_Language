#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[10]="MAHESH",h[10]="KESHAV",l[10];
    int r;
    r=strcmp(s,h);
    if(r>0){
        strcpy(l,s);
        strcpy(s,h);
        strcpy(h,l);
    }
    puts(s);
    puts(h);
    getch();
}

