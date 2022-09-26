int fact(int);
main()
{
    int i,k;
    printf("enter a number :");
    scanf("%d",&i);
    k=fact(i);
    printf("%d",k);
    getch();
}
int fact(int n)
{
    int f;
    if(n==1)
    return n;
    f=n*fact(n-1);
    return f;
}
