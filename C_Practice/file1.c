#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i;
    FILE *fp;
    char s[100];
    fp=fopen("f1.txt","w");
    if(fp==NULL){
        printf("file does not open");
        exit(1);
    }
    printf("enter a syntax\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);
    getch();
}
