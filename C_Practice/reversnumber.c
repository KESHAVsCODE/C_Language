main(){
    int x,y,z=0;
    printf("enter a number");
    scanf("%d",&x);
    while(x!=0){
        y=x%10;
        z=z*10+y;
        x=x/10;
    }
    printf("revers is %d",z);
    getch();
}
