#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s[1000];
    int i;
    fp=fopen("f1.txt","a");
    if(fp==NULL){
        printf("file not exist");
    }
    printf("enter syntaxes:");
    gets(s);
    fputs(s,fp);
    fclose(fp);
    getch();
}
