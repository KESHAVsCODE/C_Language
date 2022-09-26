main(){
    int x,y,h;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    for(h=x>y?y:x;h>=1;h--)
        if(x%h==0&&y%h==0)
            break;
    printf("hcf is %d",h);
    getch();
}

