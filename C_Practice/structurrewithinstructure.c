#include<stdio.h>
struct student
{
    int roll;
    struct childstudent
    {
        int roll;
    }s1;
}s2;
void main()
{
   s2.roll=34;
   s2.s1.roll=24;
   printf("%d",s2.roll);
   printf("%d",s2.s1.roll);
}
