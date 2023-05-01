#include<stdio.h>
int main(){
    int n,x,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==x){
                printf("%d + %d = %d\n",arr[i],arr[j],x);
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("No possible sequence");
    }
    return 0;
}