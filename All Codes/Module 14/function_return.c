#include<stdio.h>
void sum(a,b){
    int sum,a,b;
    return; // no output, cause return can also work as break statement for function.
    sum=a+b;
    printf("%d",sum); // to get output comment return out.
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b); //try to pass value through sum, you would get error because of 'void'
    sum(a,b);
    return 0;
}