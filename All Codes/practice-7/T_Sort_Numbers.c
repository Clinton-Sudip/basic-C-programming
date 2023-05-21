#include<stdio.h>
void ascend(long long int *arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%lld\n",arr[i]);
    }
}
int main(){
    long long int arr[3], new_arr[3];
    for(int i=0; i<3; i++){
        scanf("%lld",&arr[i]);
    }
    for(int i=0; i<3; i++){
        new_arr[i]=arr[i];
    }
    ascend(arr,3);
    printf("\n");
    for(int i=0; i<3; i++){
        printf("%lld\n",new_arr[i]);
    }

    return 0;
}