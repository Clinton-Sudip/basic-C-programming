#include<stdio.h>
int main(){
    int n,range;
    scanf("%d %d",&n,&range);
    int arr[n],counted[range+1]; // have add another 1 for size of count or frequency array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=range;i++){
        counted[i]=0;
    }
    for(int i=0;i<n;i++){
        counted[arr[i]]++;
    }
    for(int i=0;i<=range;i++){
        printf("%d=%d\n",i,counted[i]);
    }
    return 0;
}