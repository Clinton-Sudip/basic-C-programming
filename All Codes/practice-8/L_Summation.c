#include <stdio.h>
long long int recursion(long long int *arr, int n, long long int i, long long int sum){
    if(i==n) return sum;
    sum = sum+arr[i];
    recursion(arr,n,i+1,sum);
    
}
int main() {
    int n;
    long long int result,sum=0,value;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
    }
    result = recursion(arr,n,0,sum);
    printf("%lld",result);
    return 0;
}