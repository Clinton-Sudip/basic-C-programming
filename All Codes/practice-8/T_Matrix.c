#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                sum = sum + arr[i][j];
            }
        }
    }
    // if(sum<0){
    //     sum = sum*(-1);
    // }
    int sum_new=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+j) == n-1){
                sum_new = sum_new + arr[i][j];
            }
        }
    }
    // if(sum_new < 0){
    //     sum_new = sum_new*(-1);
    // }
    int total = sum - sum_new;
    printf("%d",abs(total));
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}