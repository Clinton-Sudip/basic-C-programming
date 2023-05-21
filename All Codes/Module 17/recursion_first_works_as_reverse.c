#include<stdio.h>
void recursion(int i){
    if(i==6) return;
    recursion(i+1); // if recursion is called first, then it works as reverse.
    printf("%d ",i);
}
int main(){
    recursion(1);
    return 0;
}