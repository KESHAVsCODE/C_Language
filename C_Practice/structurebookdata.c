#include<stdio.h>
#include<conio.h>
struct book
{
    int bookid;
    char title[20];
    double price;
};
struct book input(void);
struct book display(struct book);
struct book B1,B;
void main()
{
    B=input();
    display(B);
    getch();
}
struct book input()
{
    printf("enter book data:\n");
    printf("enter book id:\n");
    scanf("%d",&B1.bookid);
    fflush(stdin);
    printf("enter book title:\n");
    gets(B1.title);
    printf("enter book price:\n");
    scanf("%lf",&B1.price);
    return B1;
}
struct book display(struct book B)
{
    printf("%d\n%s\n%lf",B1.bookid,B1.title,B1.price);
}
