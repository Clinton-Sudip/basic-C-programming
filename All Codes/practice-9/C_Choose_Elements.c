#include<stdio.h>
#include<limits.h>
int main(){
    int n, k, count;
    long long int max = INT_MIN, sum = 0;
    scanf("%d %d",&n,&k);
    long long int arr[n];
    for(int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
    }
    for(int i=0; i<k; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>max){
                max=arr[j];
                count=j;
            }
        }
        //printf("max: %lld count: %d\n",max,count);
        sum = sum + max;
        arr[count]=INT_MIN;
        max = INT_MIN;
        // for(int i=0;i<n;i++){
        //     printf("%lld ",arr[i]);
        // }
        // printf("\n");
    }
    printf("%lld",sum);
    return 0;
}