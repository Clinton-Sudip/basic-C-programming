#include<stdio.h>
int main(){
    int size,N;
    scanf("%d %d",&size,&N); 
    int arr[N],sum=0;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=N-1;i>=0;i--){ //reverse
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<N;i=i+2){ //even position
        printf("%d ",arr[i]);
    }
    for(int i=0;i<N;i++){//sum
        sum=sum+arr[i];
    }
    printf("\nTotal sum is: %d",sum);
    return 0;
}