void main(){
    int a[10],i,max;
    printf("enter 10 number");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<=9;i++)
    if(max<a[i]){
        max=a[i];
    }
    printf("maximum of number is %d",max);
    getch();
}
