#include<stdio.h>
int main(){
    int var = 20;
    int* ptr = &var;
    printf("Address of Pointer: %p\n",&ptr);
    printf("Address of variable: %p\n",&var);
    printf("Accessing the value within pointer: %d\n",*ptr); //Dereference
    printf("Accessing the address of pointer: %p\n",ptr);
    printf("Memory size of pointer: %d\n", sizeof(ptr));
    // x = value and *ptr = value --> same.
    double x = 5;
    double* ptr2 = &x;
    double* ptr3 = ptr2; //Here ptr3 will have value of ptr2 not address of ptr2.
    printf("Memory size of pointer2 : %d\n", sizeof(ptr2)); // to store address you only need 4 bytes. not 8 bytes
    *ptr3 = 10.1023; // x's value will also be get changed
    printf("Value of ptr2: %0.4lf",*ptr2); //ptr2's value changed for the action in line 15
    return 0;
}