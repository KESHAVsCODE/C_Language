#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char* remove_extra_spaces(char *ptr);
int countwords(char *);
int main()
{
    char str[100];
    printf("Enter a syntax:");
    gets(str);
    printf("Length is %d:\n",strlen(str));
    strcpy(str,remove_extra_spaces(str));
    printf("Length is %d:\n",strlen(str));
    //printf("number of words is %d",countwords(str));
    getch();
}
/*int countwords(char *ptr)
{
    int i=0,k=0;
    for(i=0;*(ptr+i)==" ";i++){
        k++;
    }
    return k+1;
}*/
char* remove_extra_spaces(char *ptr)
{
    int i=0,j=0;
    char *p;
    p=malloc(strlen(ptr)+1);
    while(ptr!='\0'){
        while(*(ptr+i)==' ')
            i++;
            while(*(ptr+i)!=' '&&*(ptr+i)!='\0'){
                *(p+j)=*(ptr+i);
                i++; j++;
            }
            if(*(ptr+i)=='\0'&&*(p+j-1)==' ')
                j--;
            *(p+j)=*(ptr+i);
            j++;
    }
    return p;
}
