#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int a,b;
    FILE *fp;
    fp=fopen("mahesh.txt","w");
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    fprintf(fp,"sum of %d and %d is %d",a,b,a+b);
    fclose(fp);
}
