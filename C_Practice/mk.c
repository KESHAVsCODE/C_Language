#include<stdio.h>
#include<conio.h>
main()
{
int i,j,m,n=1,d=1;
for(i=1;i<=6;i++){
  printf("%d",m++);
  m=n;
 for(j=1;j<=i;j++){
 printf("%d",n++);
 }
printf("\n");
m=m+d;
d=!d;
}
getch();
}
