void main()
{
    int x,i;
    char s[10],*p;
    p=&s;
    for(i=0;i<3;i++){
        scanf("%c",(p+i));
    }
    for(i=0;i<3;i++){
        printf("%c",*(p+i));
    }
}

