main(){
    int x,i,l,u;
    printf("enter two number");
    scanf("%d%d",&l,&u);
    for(x=l+1;x<=u-1;x++){
        for(i=2;i<=x-1;i++){
            if(x%i==0)
             break;
            }
    if(x==i)
        printf("%d\n",x);
    }
    getch();
}
