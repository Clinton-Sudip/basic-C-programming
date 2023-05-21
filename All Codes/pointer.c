#include<stdio.h>
int main(){
    int x = 10;
    int* p = &x; // p has the address of x
    printf("Address of x: %p\n",&x); 
    printf("Value of p: %p\n",p); // p has the same value as the address of x
    printf("Accessing the value of x: %d\n",*p); //accessing the value of x
    *p = 500; //updating value of x using pointer
    printf("Updated value of x: %d",*p);
    return 0;
}