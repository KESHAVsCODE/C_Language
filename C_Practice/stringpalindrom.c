#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char s[10];
    int i,l;
    printf("enter a name:");
    gets(s);
    l=strlen(s);
    for(i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i]){
          printf("given string is not palindrom");
          break;
        }
    }
    if(i==l/2)
        printf("given string is palindrom");
  getch();
}
