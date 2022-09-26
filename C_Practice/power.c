main(){
    int i=1,x,y,z=1;
    printf("enter a first number and its power\n");
    scanf("%d%d",&x,&y);
    while(y>=i){
        z=z*x;
        i++;
    }
    printf("result is %d",z);
    getch();
}
