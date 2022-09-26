main(){
    int x,y=0;
    printf("enter a number");
    scanf("%d",&x);
    while(x!=0){
        x=x/10;
        y++;
    }
    printf("total digits is %d",y);
    getch();
}

