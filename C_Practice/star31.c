#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,n=1,k='A',l;
    printf("enter a number");
    scanf("%d",&l);
    for(i=1;i<=l;i++){
        for(j=1;j<=2*l-1;j++){
            if(j>=(l+1)-i&&j<=(l-1)+i){
                if(i%2==1&&j%2==0)
                    printf("%d",n++);

                 else
                    if(i%2==0&&j%2==1)
                      printf("%c",k++);
                     else
                        printf(" ");
            }
            else
                printf(" ");
        }
        n=1;
        k='A';
        printf("\n");
    }
    getch();
}
