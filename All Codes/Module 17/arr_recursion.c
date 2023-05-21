#include<stdio.h>
int recursion(int arr[], int n, int i){
     
    printf("%d ",arr[i]);
    //if(i==n-1) return;
    if(i==0) return; //base case
    recursion(arr,n,i-1);
    //recursion(arr,n,i+1); for increasing order
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //recursion(arr,n,0); for printing in increasing order.
    recursion(arr,n,n-1); 
    return 0;
}