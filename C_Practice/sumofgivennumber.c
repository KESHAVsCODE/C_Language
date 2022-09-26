main(){
    int x,z=0,y;
    printf("enter a number");
    scanf("%d",&x);
    while(x!=0){
        y=x%10;
        z=z+y;
        x=x/10;
    }
    printf("sum of digits is =%d",z);
    getch();
}

