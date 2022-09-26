main(){
    int i,j;
    char n='A';
    for(i=1;i<=4;i++){
      for(j=1;j<=7;j++){
        if(j<=5-i||j>=3+i)
          printf(" %c",n);
        else
          printf("  ");
          n++;
      }
      n='A';
      printf("\n");
    }
    getch();
}
