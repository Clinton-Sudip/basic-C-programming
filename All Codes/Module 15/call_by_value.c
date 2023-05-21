#include<stdio.h>
void fun(int x){
    x = 100;
    printf("Address of fun function's x: %p\n",&x);
    printf("Value of fun function's x: %d\n",x);
}
int main(){
    int x = 10;
    fun(x);
    printf("Address of main function's x: %p\n",&x);
    printf("Value of main function's x: %d\n",x);
    // Verdict: Values are different because two different address held these values. 
    // They are not connected with each other. fun function has the address of '0061FF00' which is keeping 100. 
    // On the other hand, Main function's x has the value 10. As this value is kept inside the address field '0061FF1C'
    return 0;
}