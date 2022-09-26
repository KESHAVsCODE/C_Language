#include<stdio.h>
#include<conio.h>
struct student             //global structure declare
{
    int rollno;
    char name[30];
    char emailid[30];
    double age;
    int birhdate;
};
struct DOB              //global structure declare
{
    int day,month,year;
};
struct student k,k1;        //global structure member  declare
struct DOB x,x1;             //  global structure member declare
struct student input();    //global function declare
struct student display(struct student,struct DOB);   //global function declare
void main()
{
    printf(" STUDENT DATA ENTRY:\n");
    input();
    display(k,x);
    getch();
}
struct student input()
{
    printf("enter roll number ");
    scanf("%d",&k.rollno);
    printf("enter name ");
    scanf("%s",&k.name);
    printf("enter email id ");
    fflush(stdin);               //clear buffer
    scanf("%s",&k.emailid);
    printf("enter age ");
    fflush(stdin);
    scanf("%d",&k.age);
    printf("enter date of birth:\n");
    printf("enter day/month/year");
    scanf("%d/%d/%d",&x.day,&x.month,&x.year);
    printf("\n");
}
struct student display(struct student k1,struct DOB x1)
{
    printf(" Roll no. =:%d\n",k1.rollno);
    printf(" Name =:%s\n",k1.name);
    printf(" Email id =:%s\n",k1.emailid);
    printf(" DOB =:%d/%d/%d",x1.day,x1.month,x1.year);
}

