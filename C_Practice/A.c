main(){
    int i,j,k;
    printf("enter three number");
    scanf("%d%d%d",&i,&j,&k);
    if(i<j){
        if(i<k)
            printf("%d",i);
        else
            printf("%d",k);
    }
    else
    {
        if(j<k)
           printf("%d",j);

        else
            printf("%d",k);

    }
getch();
}
