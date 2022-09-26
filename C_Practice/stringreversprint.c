#include<stdio.h>
#include<conio.h>
void main()
{
    int l,i;
    char s[20],ch;
    printf("enter a name :");
    gets(s);
    for(l=0;s[l];l++);
    for(i=0;i<=l/2;i++){
        ch=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=ch;
    }
    puts(s);
    getch();
}
