#include<stdio.h>
void recursion(int num){
    if(num == 0) return;
    recursion(num/10);
    int mod = num % 10;
    printf("%d ",mod);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            printf("0");
        }
        else{
            recursion(arr[i]);
        }  
        printf("\n");
    }
    return 0;
}