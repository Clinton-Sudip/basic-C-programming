#include<stdio.h>
int main(){
    int N,temp,value,index;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    /*for(int i=N-1,j=0;i>j;i--,j++){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }*/
    int i=N-1,j=0;
    while(i>j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i--;
        j++;
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}