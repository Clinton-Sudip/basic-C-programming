#include<stdio.h>
int main(){
    int n,values,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&values);
        arr[i]=values;
    }
    for(j=n-1;j>=0;j--){
        printf("%d ",arr[j]);
    }
    return 0;
}
/*Reversing*/