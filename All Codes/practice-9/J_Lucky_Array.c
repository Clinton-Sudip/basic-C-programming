#include<stdio.h>
#include<limits.h>
int main(){
    int n, min = INT_MAX, count = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] == min){
            count++;
        }
    }
    if(count % 2 == 0){
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }
    return 0;
}