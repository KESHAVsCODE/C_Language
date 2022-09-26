#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp;
    int i;
    fp=fopen("f1.txt","r");
    if(fp==NULL){
        printf("file not found:");
        exit(1);
    }
    ch=fgetc(fp);
    while(feof(fp)==0){
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    getch();
}
