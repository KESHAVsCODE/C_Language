main(){
    int i,j,k=1,p,row;
    printf("enter number of row");
    scanf("%d",&row);
    for(i=1;i<=5;i++){
          p=k;
      for(j=1;j<=i;j++){
            printf(" %d",p);
       p=p-(row-i+j);
      }
        printf("\n");
        k=k+row+1-i;
    }
    getch();
}

