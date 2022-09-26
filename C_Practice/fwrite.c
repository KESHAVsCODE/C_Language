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
    fp=fopen("mahesh.txt","ab");
    printf("enter book title,id and price:\n");
    gets(b1.title);
    scanf("%d",&b1.bookid);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
    getch();
}
