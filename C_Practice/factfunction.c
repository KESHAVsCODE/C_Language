int fact(int);
int main(){
    int i,k;
    printf("enter a number");
    scanf("%d",&i);
    k=fact(i);
    printf("factorial of is %d",k);
}
int fact(int x){
if(x>0)
    return x*fact(x-1);
else
    return 1;
}
