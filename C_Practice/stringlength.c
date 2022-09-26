#include"stringlength.c"
#include<conio.h>
#include<string.h>
void main()
{
    char s[20];
    int i;
    printf("enter a name :");
    gets(s);
    i=strlen(s);
    printf("%d",i);
    getch();
}
