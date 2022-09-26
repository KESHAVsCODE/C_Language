#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[20];
    char i[20];
    printf("enter a name :");
    gets(s);
    s==strrev(s);
    puts(s);
    getch();
}

