#include<stdio.h>
#include<math.h>
int countdigit(int);
int revers(int,int);
int main()
{
    int n,l,i,k;
    printf("enter a number to revers:");
    scanf("%d",&n);
    i=countdigit(n);
    k=revers(n,i);
    printf("%d",k);
}
int countdigit(int n){
    int l=0;
    while(n!=0){
      l++;
      n=n/10;
    }
  return l;
}
int revers(int n,int l)
{
   if(n==0&&l==0)
        return 0;
   else
       return(((n%10)*pow(10,l-1))+revers(n/10,--l));
}

