#include<stdio.h>
int recursion(int n, int i){
    if(i==n+1) return 0;
    printf("%d\n",i);
    recursion(n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    recursion(n,1);
    return 0;
}