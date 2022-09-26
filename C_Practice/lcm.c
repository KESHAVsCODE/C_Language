main(){
    int x,y,l;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    for(l=x>y?x:y;l<=x*y;l=l+(x>y?x:y))
        if(l%x==0&&l%y==0)
            break;
    printf("LCM is %d",l);
    getch();
}

