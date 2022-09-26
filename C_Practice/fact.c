main(){
    int i,x=1,j;
    printf("enter a number");
    scanf("%d",&i);
    j=i;
    while(i>=1){
        x=x*i;
        i--;
    }
    printf("factorial of %d is %d",j,x);
    getch();
}
