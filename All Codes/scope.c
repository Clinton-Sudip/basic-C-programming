#include<stdio.h>
//global variable
int x=100;
fun(){
    int s;
    printf("Address of x in fun function: %p\n",&x);
    printf("Address of s in fun function: %p\n",&s); //'&' means address of.
}
int main(){
    int s;
    printf("Address of s in main funciton: %p\n",&s);
    printf("Address of x in main function: %p\n",&x);
    fun();
    // this means declaraing inside a function doesn't have effect on other functions,
    // even if the identifiers are same in name
    return 0;
}