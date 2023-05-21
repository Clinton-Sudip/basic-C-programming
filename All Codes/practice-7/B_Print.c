#include<stdio.h>
int till_n(int n){
    for(int i=1; i<=n; i++){
        if(i==n){
            printf("%d",i);
            break;
        }
        printf("%d ",i);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    till_n(n);
    return 0;
}