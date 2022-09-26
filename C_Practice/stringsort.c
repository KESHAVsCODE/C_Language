#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
{
    char s[5][10],h[10];
    int i,r,round;
    printf("enter 5 names:");
    for(i=0;i<=4;i++)
    gets(s[i]);
    for(round=1;round<=4;round++){
        for(i=0;i<=4-round;i++){
             r=strcmp(s[i],s[i+1]);
                if(r>0){
                  strcpy(h,s[i]);
                  strcpy(s[i],s[i+1]);
                  strcpy(s[i+1],h);
                }
         }
    }
     printf("\nnames in dictionary order is\n");
     for(i=0;i<=4;i++){
        puts(s[i]);
     }
     getch();
}
