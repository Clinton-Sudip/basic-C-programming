#include<stdio.h>
int main(){
    int arr[10],n,index;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&index);
    for(int i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}