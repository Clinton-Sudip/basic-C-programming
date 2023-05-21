#include<stdio.h>
long long int factorial(int n, long long int result){
    if(n==0) return result;
    result = result*n;
    factorial(n-1,result);
}
int main(){
    int n;
    scanf("%d",&n);
    long long int output = factorial(n,1);
    printf("%lld",output);
    return 0;
}