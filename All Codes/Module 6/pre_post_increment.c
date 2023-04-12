#include<stdio.h>
int main(){
    int i=10,x;
    x=++i;
    printf("x=%d and i=%d\n",x,i);
    i=10;
    x=i++;
    printf("x=%d and i=%d\n",x,i);
    return 0;
}