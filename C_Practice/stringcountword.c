#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char* remove_extra_spaces(char *s);
int countwords(char *);
int main()
{
    char str[100];
    printf("Enter a syntax:");
    gets(str);
    printf("\nString Length is: %d",strlen(str));
    strcpy(str,remove_extra_spaces(str));
    printf("\nAfter remove space String Length is: %d\n",strlen(str));
    printf("number of words is %d",countwords(str));
    getch();
}
int countwords(char *ptr)
{
    int i=0,k=0;
    while(*(ptr+i)){
        if(*(ptr+i)==' ')
            k++;
        i++;
    }
    return k+1;
}
char* remove_extra_spaces(char *s)
{
    int i=0,j=0;
    char *p;
    p=malloc(strlen(s)+1);
    while(*(s+i)){
        while(*(s+i)==' ')
            i++;
            while(*(s+i)!=' ' && *(s+i)!='\0'){
                *(p+j)=*(s+i);
                i++; j++;
            }
            if(*(s+i)=='\0'&&*(p+j-1)==' ')
                j--;
            *(p+j)=*(s+i);
            j++;
    }
    return p;
}

