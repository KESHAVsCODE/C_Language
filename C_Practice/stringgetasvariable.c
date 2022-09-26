#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char* enterstring();
char main()
{
    char *r;
    r=enterstring();
    printf("you have entered: %s",r);
    getch();
}
char* enterstring()
{
    char *p,ch,*q;
    int len=1,i;
    p=(char*)malloc(len);
    ch=getche();
    *p=ch;
  do{
    q=(char*)malloc(len+1);
    for(i=0;i<len;i++)
        *(q+i)=*(p+i);
    *(q+i)='\0';
    free(p);
    len++;
    p=(char*)malloc(len);
    for(i=0;i<len;i++)
        *(p+i)=*(q+i);
    free(q);
    ch=getche();
    *(p+len-1)=ch;
  }while(ch!=13);
 // q=(char*)malloc(len);
 // for(i=0;i<len;i++)
 //   *(q+i)=*(p+i);
  *(p+len-1)='\0';  //*(q+len-1)='\0';
  return p;         // return q;
}
