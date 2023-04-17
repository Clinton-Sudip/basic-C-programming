#include<stdio.h>
int main(){
    int N,temp,value,index;
    scanf("%d",&N);
    int arr[N+1];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d", &index, &value);
    for(int i=N;i>index;i--){
        arr[i]= arr[i-1];
    }
    arr[index]=value;
    for(int i=0;i<=N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}