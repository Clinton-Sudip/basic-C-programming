#include<stdio.h>
int mirror(int *arr, int n){
    for(int i=0,j=n-1; i<j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n,m,x;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        int temp[m];
        for(int j=0; j<m; j++){
            temp[j]=arr[i][j];
        }
        mirror(temp,m);
    }
    // // you can just print it:
    // for(int i=0; i<n; i++){
    //     for(int j=m-1; j>=0; j--){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
}
