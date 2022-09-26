#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s[1000];
    int i;
    fp=fopen("f1.txt","r");
    if(fp==NULL){
        printf("file not found");
        exit(1);
    }
    while(fgets(s,8,fp)!=NULL){
        printf("%s",&s[0]);
    }
    fclose(fp);
    getch();
}
