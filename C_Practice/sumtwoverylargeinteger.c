#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[100],b[100],r[110];
    int i,j,c=0,l1,l2,s,k;
    printf("\n enter the first large integer:");
    scanf("%s",a);
    printf("\n enter the second large integer:");
    scanf("%s",b);
    l1=strlen(a);
    l2=strlen(b);
    i=l1-1;
    j=l2-1;
    k=l1>l2?l1:l2;
    r[k]='\0';
    k--;
    while(i>=0&&j>=0)
    {
        s=(a[i]-48)+(b[j]-48)+c;
        r[k]=s%10+48;
        c=s/10;
        i--;
        j--;
        k--;
    }
    if(i>=0)
    {
        while(i>=0)
        {
            s=a[i]-48+c;
            r[k]=s%10+48;
            c=s/10;
            i--;
            k--;
        }
    }
    else if(j>=0)
    {
        while(j>=0)
        {
            s=b[i]-48+c;
            r[k]=s%10+48;
            c=s/10;
            j--;
            k--;
        }
    }
    if(c>0)
    {
        for(i=strlen(r);i>=0;i++)
        r[i+1]=r[i];
        r[0]=c+48;
    }
    printf("\n sum=%s",r);
    getch();
}

