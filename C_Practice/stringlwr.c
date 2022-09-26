#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[20];
    printf("enter a name :");
    gets(s);
    strlwr(s);
    puts(s);
}
