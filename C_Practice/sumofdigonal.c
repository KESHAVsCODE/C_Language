#include<stdio.h>
#include<malloc.h>
int main()
{
    int i,j,n,*p,**q;
    scanf("%d",&n);
    q=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++){
        q[i]=(int*)malloc(n*sizeof(int));
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==n&&j==n)
            break;
            scanf("%d ",&q[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",q[i][j]);
        }
        printf("\n");
    }
    return 0;
}
