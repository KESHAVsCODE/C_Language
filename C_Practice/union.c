#include<stdio.h>
#include<conio.h>
union name
{
    int x;
     char y[10];
      double z;
};
void main()
{
    union name B;
    B.y[10]={'k','e','s','h','a','v'};
    B.x=24;
    printf("x=%d\n",B.x);
    printf("%s",B.y);
    B.z=45.45;
    printf("z=%lf",B.z);
    getch();
}
