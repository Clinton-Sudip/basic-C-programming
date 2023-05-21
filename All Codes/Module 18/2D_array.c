#include<stdio.h>
int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    int arr[n][p];
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            scanf("%d",&arr[i][j]); // 2D input
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            printf("%d ",arr[i][j]); // 2D output
        }
        printf("\n");
    }

    return 0;
}