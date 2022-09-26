void main(){
    int i,j,n;
    for(i=1;i<=4;i++){
            n=65;
        for(j=1;j<=7;j++){
            if(j<=5-i || j>=3+i){
                printf("%c",n);
             j<4?n++:n--;
            }
            else{
                printf(" ");
               if(j==4)
                n--;
            }
        }
        printf("\n");
    }
    getch();
}
