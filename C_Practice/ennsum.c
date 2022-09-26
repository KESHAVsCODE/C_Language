main(){
    int i,j=1,x=0;
    printf("enter a natural number");
    scanf("%d",&i);
    do{
        x=x+2*j;
        j++;
    }while(j<=i);
    printf("sum of natural number is %d",x);
    getch();
}
