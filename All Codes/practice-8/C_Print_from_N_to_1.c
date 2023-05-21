#include <stdio.h>
void recursion(int n, int i){
    if(i==n+1){
        return;
    }
    recursion(n,i+1);
    if(i==1){
        printf("%d",i);
    }
    else{
        printf("%d ",i);    
    }
    
    /*if(n==0) return;
    printf("%d",n);
    recursion(n-1,i);*/
    
}
int main() {
    int n;
    scanf("%d",&n);
    recursion(n,1);
    return 0;
}