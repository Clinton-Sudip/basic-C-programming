#include<stdio.h>
#include<limits.h>
long long int max_fun(long long int *arr, int n, int i, long long int max){
    if(i==n) return max;
    if(arr[i]>max){
        max=arr[i];
    }
    max_fun(arr,n,i+1,max);
}
int main(){
    int n;
    scanf("%d",&n);
    long long int arr[n];
    long long int max=INT_MIN;
    for(int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
    }
    int output = max_fun(arr,n,0,max);
    printf("%d",output);
    return 0;
}