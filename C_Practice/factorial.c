main(){
    int i,j=1,x;
    printf("enter a number");
    scanf("%d",&i);
    while(j<=i){
        x=x*(i*(i-1));
        i=i-2;
    }
    printf("factorial of %d is %d",x);
    getch();
}
