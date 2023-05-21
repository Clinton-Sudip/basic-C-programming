#include<stdio.h>
#include<limits.h>
void min(int arr[],int n){
    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    printf("%d ",mini);
}
void max(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    printf("%d",maxi);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    min(arr,n);
    max(arr,n);
    return 0;
}