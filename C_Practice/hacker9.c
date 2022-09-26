#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int c,i,j,k,l;
    gets(s);
    j=s[0]-48;
    k=s[1]-48;
    c=j*10+k;
        if(c<12&&s[8]=='P'&&s[9]=='M'){
            c=12+c;
            s[0]=c/10+48;
            s[1]=c%10+48;
            s[8]='\0';
            s[9]='\0';
        }
        else if(c<12&&s[8]=='A'&&s[9]=='M'){
            s[8]='\0';
            s[9]='\0';
        }
        else if(c=12&&s[8]=='A'&&s[9]=='M'){
            s[0]='0';
            s[1]='0';
            s[8]='\0';
            s[9]='\0';
        }
        else if(c=12&&s[8]=='P'&&s[9]=='M'){
            s[8]='\0';
            s[9]='\0';
        }
    puts(s);
}

