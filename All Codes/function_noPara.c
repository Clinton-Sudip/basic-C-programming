#include<stdio.h>
int sum(void){
    int sum,a,b;
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum; 
}
int main(){
    int result = sum(); //try to pass value through sum, you would get error because of 'void'
    printf("%d",result);
    return 0;
}