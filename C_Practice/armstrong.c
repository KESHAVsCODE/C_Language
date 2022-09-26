main(){
    int i,x,y,z;
    for(i=1;i<=1000;i++){
        z=0;
        x=i;
        while(x!=0){
            y=x%10;
            z=z+y*y*y;
            x=x/10;
        }
        if(z==i)
            printf("%d\n",z);
    }
    getch();
}
