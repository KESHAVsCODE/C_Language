#include<stdio.h>
#include<conio.h>
void print(int []);
int main()
{
    int a[10],i;
    printf("enter 10 number in array :");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    print(a);
    getch();
}
void  print(int a[])
{
    int i;
    for(i=0;i<=9;i++){
      printf("\n%d",a[i]);
    }
}

