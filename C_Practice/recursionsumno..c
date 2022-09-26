int sum(int);
int main()
{
    int i,j,n;
    printf("enter a number to sum :");
    scanf("%d",&n);
    j=sum(n);
    printf("%d",j);
    getch();
}
int sum(int i)
{
    if(i==1)
        return 1;
    else
        return i+sum(i-1);
}
