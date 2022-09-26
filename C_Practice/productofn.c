main(){
    int i,j=1,x=1;
    printf("enter a natural number");
    scanf("%d",&i);
    do{
        x=j*x;
        j++;
       }while(j<=i);
    printf("product of i=%d",x);
    getch();
}
