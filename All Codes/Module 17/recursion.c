#include<stdio.h>
int recursion(int i){
    if (i==0){
        return; //Base Case
    }
    printf("%d ",i);
    
    recursion(i-1);
}
int main(){
    recursion(5);
    return 0;
}