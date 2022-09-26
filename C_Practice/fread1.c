#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct book
{
    char title[1000];
    int bookid;
    float price;
}b1;
void main()
{
    FILE *fp;
    fp=fopen("mahesh.txt","rb");
        if(fp==NULL){
        printf("file not found");
        exit(1);
    }
    while(fread(&b1,sizeof(b1),1,fp)==1){
    printf("%s %d %f\n",b1.title,b1.bookid,b1.price);
    }
    fclose(fp);
    getch();
}
