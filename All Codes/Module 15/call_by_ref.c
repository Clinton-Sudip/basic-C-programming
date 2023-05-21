#include<stdio.h>
void fun(int* p){
    printf("Value inside p: %p\n",p); // checking if p has the value of x or not
    *p = 100; // dereferencing
}
int main(){
    int x = 10;
    printf("Address of x: %p\n",&x);
    fun(&x); //sending the address of x, Call by reference works by sending the address not the value
    printf("Value of x after dereferencing: %d\n",x); // value got changed
    return 0;
}