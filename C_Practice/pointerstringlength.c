#include<stdio.h>
#include<conio.h>
int len(char*);
char* rev(char*);
void main()
{
    char s[10];
    int k;
    printf("enter a name :");
    gets(s);
    k=len(&s[0]);
    printf("lenght is %d\n",k);
    printf("%s",rev(s));
    getch();
}
int len(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return i;
}
char* rev(char *p)
{
    int l,i;
    char t;
    l=len(p);
    for(i=0;i<=l/2;i++){
        t=*(p+i);
        *(p+i)=*(p+l-i-1);
        *(p+l-i-1)=t;
    }
    return p;

}
